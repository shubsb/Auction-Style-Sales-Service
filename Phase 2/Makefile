output: main.o user.o item.o transaction.o bid.o
	g++ main.o user.o item.o transaction.o bid.o -o output

main.o: main.cpp
	g++ -c main.cpp

user.o: user.cpp user.h
	g++ -c -std=c++11 user.cpp

item.o: item.cpp item.h
	g++ -c -std=c++11 item.cpp

transaction.o: transaction.cpp transaction.h
	g++ -c -std=c++11 transaction.cpp

bid.o: bid.cpp bid.h
	g++ -c -std=c++11 bid.cpp

clean:
	rm *.o output
