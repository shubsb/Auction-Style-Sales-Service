
output: main.o user.o item.o
	g++ main.o user.o item.o -o output

main.o: main.cpp
	g++ -c main.cpp

user.o: user.cpp user.h
	g++ -c -std=c++11 user.cpp

item.o: item.cpp item.h
	g++ -c -std=c++11 item.cpp

clean:
	rm *.o output
