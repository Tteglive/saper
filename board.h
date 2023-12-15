#pragma once
#include <iostream>
#include <vector>

enum field_type {
  empty,
  bomb
};

struct board {
  int length;
  int height;
  std::vector<std::vector<field_type>> fields;

// Конструкторы
    board(); // Конструктор по умолчанию
    board(const board& other); // Конструктор копирования
    board(int length, int height); // Конструктор с параметрами

    // Операторы
    board& operator=(const board& other); // Оператор копирования
    bool operator==(const board& other) const; // Оператор сравнения

    // Операторы ввода и вывода
    friend std::ostream& operator<<(std::ostream& os, const board& b);
    friend std::istream& operator>>(std::istream& is, board& b);

    // Метод для освобождения памяти
    void release();

    void initialize_board(int length, int height);
};
