#include "minesweeper.h"

int main() {
    std::cout
        << "Rules:" << std::endl
        << "Enter 'o', then enter value of i and j to open cell[i][j]." << std::endl
        << "Enter 'f', then enter value of i and j to place or remove flag on cell [i][j]." << std::endl
        << std::endl;

    game();

    return 0;
}
