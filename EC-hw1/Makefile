all: main.o
	c++ -std=c++11 -g main.o -o out
main.o: main.cpp
	c++ -std=c++11 -c -g -Wall -Wextra -pedantic main.cpp
run:
	make all
	./out
clean:
	rm *.o out
