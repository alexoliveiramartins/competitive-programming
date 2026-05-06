run:
	g++ solution.cpp -o ./output/solution.out && ./output/solution.out < in.txt
new:
	mkdir -p output
	cp base.cpp solution.cpp
	touch in.txt
