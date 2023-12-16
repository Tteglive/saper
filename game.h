#pragma once
#include "board.h"
/**
 * @file game.h
 * @brief Header file for the Minesweeper game logic.
 * @details Contains the definition of the 'game' struct representing the Minesweeper game.
 * @author Petcov Victor
 * @date 2023
 */
 #ifndef GAME_H
 #define GAME_H
/**
 * @brief Represents the Minesweeper game (game structure).
 */
struct game{
  board brd;/**< Game board. */
  int num_bombs;/**< Number of bombs in the game. */
  /**
    * @brief Initializes the game, placing bombs on the board.
    */
  void init();
  /**
     * @brief Runs the game.
     */
  void run();
  /**
    * @brief Static method to place bombs on the board.
    * @param b The game board.
    * @param num_bombs Number of bombs to place.
    */
  static void place_bombs(board& b, int num_bombs);
};
