main: main.o vectors.o optimism.o fusion.o pairwise.o
	g++ -o main main.o vectors.o optimism.o fusion.o pairwise.o

main.o: main.cpp vectors.h optimism.h fusion.h pairwise.h
	g++ -std=c++11 -c main.cpp

vectors.o: vectors.cpp vectors.h
	g++ -std=c++11 -c vectors.cpp

optimism.o: optimism.cpp optimism.h
	g++ -std=c++11 -c optimism.cpp

fusion.o: fusion.cpp fusion.h
	g++ -std=c++11 -c fusion.cpp

pairwise.o: pairwise.cpp pairwise.h
	g++ -std=c++11 -c pairwise.cpp

tests: tests.o vectors.o optimism.o fusion.o pairwise.o
	g++ -o tests tests.o vectors.o optimism.o fusion.o pairwise.o
tests.o: tests.cpp doctest.h vectors.h optimism.h fusion.h pairwise.h
	g++ -std=c++11 -c tests.cpp

clean:
	rm -f main main.o vectors.o optimism.o fusion.o pairwise.o tests.o tests