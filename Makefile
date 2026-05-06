run:
	g++ solution.cpp -o ./output/solution.out && ./output/solution.out < in.txt
new:
	mkdir -p output
	cp base.cpp solution.cpp
	touch in.txt
push:
	git add . 
	git commit -m "$$(git diff --cached --name-only -z | xargs -0 -r -n1 basename | sed -nE 's/\.[^.]*$$//; s/^([^- ]+).*/\1/; /[0-9]/p' | sort -u | paste -sd ' ' -)"
	git push
