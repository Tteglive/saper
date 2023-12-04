#include <iostream>
#include "game.h"

void game::init() {
    // Инициализация игры,(установка бомб на доске)
    place_bombs(brd, num_bombs);
}

void game::run() {

}
void game::place_bombs(board& b, int num_bombs) {
    // Реализация функции place_bombs
    std::cout << "Placing bombs in the game!" << std::endl;
}
