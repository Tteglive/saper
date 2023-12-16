# Minesweeper
This project is a simple implementation of the classic Minesweeper game in C++. The game consists of two main components: the game board and the game logic.

## Task Description
The goal of this project is to create a simple version of the Minesweeper game using the C++ programming language. The game involves creating a board with mines, and the player needs to open cells on the board while avoiding the mines. Each open cell can contain a number indicating the number of mines in neighboring cells.

## Game Rules
1. The player opens cells on the board by entering the row and column numbers (separated by a space).
2. If a cell contains a bomb, the game ends, and the player loses.
3. If a cell does not contain a bomb, the number of bombs in neighboring cells is revealed.
4. The player continues to open cells, avoiding bombs, to win the game.

## Dependencies
- Development environment - Atom
- compiler - MingW G++
- External libraries or dependencies - no use of third party libraries except the standard C++ library.

## Application build method
The MingW G++ compiler is used to build the application. The project includes three main files: main.cpp, board.cpp, and game.cpp. The build is done using the provided Makefile. To compile the project, you need to run the 'make' command on the command line. This will create the executable file Minesweeper.exe. If you need to clean the created object files and the executable file, you need to run the 'make clean' command.
