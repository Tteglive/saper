#include <iostream>
#include "game.h"
#include <cstdlib> // Для rand()
#include <ctime> // Для инициализации генератора случайных чисел


void game::init() {
    // Инициализация игры, установка бомб на доске
    place_bombs(brd, num_bombs);
}

void game::run() {
    while (true) {
        std::cout << brd;

        std::cout << "Enter row and column (separated by a space): ";
        int row, col;
        std::cin >> row >> col;

        if (row < 0 || row >= brd.length || col < 0 || col >= brd.height) {
            std::cout << "Invalid input. Try again." << std::endl;
            continue;
        }

        open_cell(row, col);

        if (check_win()) {
            std::cout << "Congratulations! You've won!" << std::endl;
            break;
        }
    }
}


void game::place_bombs(board& b, int num_bombs) {
    std::cout << "Placing bombs in the game!" << std::endl;
    for (int i = 0; i < num_bombs; ++i) {
        int randRow = std::rand() % b.length;
        int randCol = std::rand() % b.height;
        b.fields[randRow][randCol] = bomb;
    }
}

void game::open_cell(int row, int col) {
// Открытие ячейки
}

bool game::check_win() const {
return false;
}
