#pragma once
#include "board.h"

struct game{
  board brd;
  int num_bombs;

  void init();
  void run();
  static void place_bombs(board& b, int num_bombs);
  void open_cell(int row, int col);
  bool check_win() const;
};
