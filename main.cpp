#include "board.h"
#include "field.h"
#include "game.h"

int main(int argc, char const *argv[]) {
    game mygame;
    mygame.init();
    mygame.run();
    return 0;
}
