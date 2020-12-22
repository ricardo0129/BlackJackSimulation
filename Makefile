output: main.o deck.o
	g++ main.o deck.o -o output

main.o: main.cpp 
	g++ -c main.cpp

deck.o: deck.cpp deck.h
	g++ -c deck.cpp

clean:
	rm *.o out
