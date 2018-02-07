
output: main.o user.o
	g++ main.o user.o -o output

main.o: main.cpp
	g++ -c main.cpp

user.o: user.cpp user.h
	g++ -c -std=c++11 user.cpp

clean:
	rm *.o output
