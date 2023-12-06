CC = g++
CFLAGS = -std=c++11 -Wall
TARGET = Minesweeper.exe
all: $(TARGET)

$(TARGET): main.o board.o game.o
	$(CC) $(CFLAGS) main.o board.o game.o -o $(TARGET)

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

board.o: board.cpp
	$(CC) $(CFLAGS) -c board.cpp

game.o: game.cpp
	$(CC) $(CFLAGS) -c game.cpp

clean:
	rm -f *.o $(TARGET)
