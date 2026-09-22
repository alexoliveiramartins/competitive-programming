#!/usr/bin/env python3
"""Group changed problems by directory and commit before pushing."""

import argparse
import os
from pathlib import Path, PurePosixPath
import re
import subprocess
import tempfile


PREFIXES = {
    "leetcode": r"^\d+",
    "codeforces": r"^\d+[A-Za-z]\d*",
    "atcoder": r"^[A-Za-z]+\d+_[A-Za-z0-9]+",
}


def git(*args, **kwargs):
    return subprocess.check_output(["git", *args], **kwargs)


def sort_key(value):
    return [int(part) if part.isdigit() else part.casefold()
            for part in re.split(r"(\d+)", value)]


def commit_message(paths):
    groups = {}
    has_changes = False
    for name in paths:
        has_changes = True
        path = PurePosixPath(name)
        scope = path.parts[0]
        if len(path.parts) < 2 or scope not in PREFIXES:
            continue
        match = re.match(PREFIXES[scope], path.stem)
        # Preserve names for files without a platform-specific problem ID.
        label = match.group() if match else str(path.relative_to(scope))
        groups.setdefault(scope, set()).add(label)

    if not groups:
        return "chore: update repository" if has_changes else None
    scopes = sorted(groups)
    labels = {scope: ", ".join(sorted(groups[scope], key=sort_key))
              for scope in scopes}
    details = "; ".join(labels[scope] for scope in scopes)
    return f"[{', '.join(scopes)}]: {details}"


def staged_message(env=None):
    # Include both sides of renames, including moves between platforms.
    paths = git("diff", "--cached", "--name-only", "--no-renames", "-z", env=env)
    return commit_message(os.fsdecode(path) for path in paths.split(b"\0") if path)


def preview_message():
    # A disposable index gives precisely the same result as `git add -A`
    # without changing the user's staging area, even for a first commit.
    with tempfile.TemporaryDirectory(prefix="git-push-preview-") as directory:
        objects = Path(directory) / "objects"
        objects.mkdir()
        original_objects = str(Path(os.fsdecode(
            git("rev-parse", "--git-path", "objects")
        ).strip()).resolve())
        alternates = [original_objects]
        if os.environ.get("GIT_ALTERNATE_OBJECT_DIRECTORIES"):
            alternates.append(os.environ["GIT_ALTERNATE_OBJECT_DIRECTORIES"])
        env = dict(os.environ,
                   GIT_INDEX_FILE=str(Path(directory) / "index"),
                   GIT_OBJECT_DIRECTORY=str(objects),
                   GIT_ALTERNATE_OBJECT_DIRECTORIES=os.pathsep.join(alternates))
        head = subprocess.run(["git", "rev-parse", "--verify", "HEAD"],
                              stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
        git("read-tree", "HEAD" if head.returncode == 0 else "--empty", env=env)
        git("add", "-A", env=env)
        return staged_message(env)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--preview", action="store_true")
    args = parser.parse_args()
    os.chdir(os.fsdecode(git("rev-parse", "--show-toplevel")).strip())
    if args.preview:
        print(preview_message() or "Nenhuma alteração para commit.")
        return

    git("add", "-A")
    message = staged_message()
    if message:
        subprocess.run(["git", "commit", "-m", message], check=True)
    else:
        print("Nenhuma alteração para commit; enviando commits pendentes.", flush=True)
    subprocess.run(["git", "push"], check=True)


if __name__ == "__main__":
    try:
        main()
    except subprocess.CalledProcessError as error:
        raise SystemExit(error.returncode)
