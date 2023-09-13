#pragma once
#include "board.h"

struct game{
  board brd;
  int num_bombs;

  void init();
  void run();
};
