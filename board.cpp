#include "board.h"

// Определения конструкторов
board::board() : length(0), height(0), fields(nullptr) {}

board::board(const board& other) : length(other.length), height(other.height) {
    initialize_board(*this, length, height);

    for (int i = 0; i < length; ++i) {
        for (int j = 0; j < height; ++j) {
            fields[i][j] = other.fields[i][j];
        }
    }
}

board::board(int length, int height) : length(length), height(height) {
    initialize_board(*this, length, height);
}

// Определение оператора копирования
board& board::operator=(const board& other) {
    if (this != &other) {
        release();
        length = other.length;
        height = other.height;
        initialize_board(*this, length, height);

        for (int i = 0; i < length; ++i) {
            for (int j = 0; j < height; ++j) {
                fields[i][j] = other.fields[i][j];
            }
        }
    }
    return *this;
}

// Определение оператора сравнения
bool board::operator==(const board& other) const {
    if (length != other.length || height != other.height) {
        return false;
    }

    for (int i = 0; i < length; ++i) {
        for (int j = 0; j < height; ++j) {
            if (fields[i][j] != other.fields[i][j]) {
                return false;
            }
        }
    }

    return true;
}

// Определение метода для освобождения памяти
void board::release() {
    for (int i = 0; i < length; ++i) {
        delete[] fields[i];
    }
    delete[] fields;
    length = 0;
    height = 0;
    fields = nullptr;
}

// Определение оператора вывода
std::ostream& operator<<(std::ostream& os, const board& b) {
    for (int i = 0; i < b.length; ++i) {
        for (int j = 0; j < b.height; ++j) {
            os << b.fields[i][j] << " ";
        }
        os << std::endl;
    }
    return os;
}

// Определение оператора ввода
std::istream& operator>>(std::istream& is, board& b) {
    for (int i = 0; i < b.length; ++i) {
        for (int j = 0; j < b.height; ++j) {
            is >> b.fields[i][j];
        }
    }
    return is;
}
