#pragma once

#include <iostream>
#include <iomanip>
#include <ctime>

extern char table[10][10];
extern char table_mine_positions[10][10];
extern char symbol;
extern int flag_counter;
extern int mines_flagged_counter;
extern bool end_game_lose;
extern time_t time_since_epoch;
extern time_t game_time;

void reveal(int, int);
void create_mine_positions();
void cell_number(int, int);
void create_table();
void print_table(char);
void open_cell();
void place_or_remove_flag();
void input_symbol();
void game();
bool end_game_win_check();
