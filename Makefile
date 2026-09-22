run-cpp:
	g++ solution.cpp -o ./output/solution.out && ./output/solution.out < in.txt
run-py:
	python3 solution.py
new-cpp:
	mkdir -p output
	cp base.cpp solution.cpp
	touch in.txt
new-py:
	mkdir -p output
	cp base.py solution.py
	touch in.txt
.PHONY: run-cpp run-py new-cpp new-py push push-preview

push:
	python3 scripts/git_push.py

push-preview:
	python3 scripts/git_push.py --preview
