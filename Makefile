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
push:
	git add . 
	git commit -m "$$(git diff --cached --name-only -z | xargs -0 -r -n1 basename | sed -E 's/\.[^.]*$$//; s/^([^- ]+).*/\1/' | sort -u | paste -sd ' ' -)" --amend
	git push
