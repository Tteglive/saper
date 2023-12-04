CC = g++
CFLAGS = -std=c++11 -Wall

all: main

main: main.o board.o game.o
	$(CC) $(CFLAGS) main.o board.o game.o -o main

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

board.o: board.cpp
	$(CC) $(CFLAGS) -c board.cpp

game.o: game.cpp
	$(CC) $(CFLAGS) -c game.cpp

clean:
	rm -f *.o main
