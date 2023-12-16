#pragma once
#include "field.h"
/**
 * @file board.h
 * @brief Header file for the Minesweeper game board.
 * @details Contains the definition of the 'board' struct representing the game board.
 * @author Petcov Victor
 * @date 2023
 */

/**
 * @brief Represents the game board.
 */
struct board{
  int length;/**< Length of the board. */
  int height;/**< Height of the board. */
  field_type ** fields;/**< 2D array representing the fields on the board. */
};

/**
     * @brief Constructor for the board.
     */
    board();
    /**
    * @brief Copy constructor for the board.
    * @param other The board to copy.
    */
    board(const board& other);
    /**
    * @brief Parameterized constructor for the board.
    * @param length Length of the board.
    * @param height Height of the board.
    */
    board(int length, int height);
    /**
    * @brief Assignment operator for the board.
    * @param other The board to copy.
    * @return Reference to the assigned board.
    */
    board& operator=(const board& other);
    /**
     * @brief Equality comparison operator for the board.
     * @param other The board to compare.
     * @return True if the boards are equal, false otherwise.
     */
    bool operator==(const board& other) const;
   /**
    * @brief Output stream operator for the board.
    * @param os Output stream.
    * @param b Board to output.
    * @return Reference to the output stream.
    */
    friend std::ostream& operator<<(std::ostream& os, const board& b);
    /**
     * @brief Input stream operator for the board.
     * @param is Input stream.
     * @param b Board to input.
     * @return Reference to the input stream.
     */
    friend std::istream& operator>>(std::istream& is, board& b);
    // Memory release method
   /**
    * @brief Releases memory occupied by the board.
    */
    void release();
};
