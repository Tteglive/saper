CXX = g++
CXXFLAGS = -std=c++11 -Wall

SRCS = main.cpp minesweeper.cpp
OBJS = $(SRCS:.cpp=.o)
EXEC = minesweeper

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(EXEC)

main.o: main.cpp minesweeper.h
	$(CXX) $(CXXFLAGS) -c main.cpp

minesweeper.o: minesweeper.cpp minesweeper.h
	$(CXX) $(CXXFLAGS) -c minesweeper.cpp

clean:
	rm -f $(OBJS) $(EXEC)
