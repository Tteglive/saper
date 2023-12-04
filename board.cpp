#include "board.h"

void initialize_board(board& b, int length, int height) {
    b.length = length;
    b.height = height;

    // Выделяем память для массива полей
    b.fields = new field_type*[length];
    for (int i = 0; i < length; ++i) {
        b.fields[i] = new field_type[height];
    }
}

void release_board(board& b) {
    // Освобождаем выделенную память
    for (int i = 0; i < b.length; ++i) {
        delete[] b.fields[i];
    }
    delete[] b.fields;
}

// Метод для установки бомб на доске
void place_bombs(board& b, int num_bombs) {
    // Код для расстановки бомб на доске
}
