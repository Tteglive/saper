#include "board.h"
#include <algorithm>

// Определения конструкторов
board::board() : length(0), height(0), fields() {}

board::board(const board& other) : length(other.length), height(other.height), fields(other.fields){}

board::board(int length, int height) : length(length), height(height) {
    initialize_board(length, height);
}

// Определение оператора копирования
board& board::operator=(const board& other) {
    if (this != &other) {
        release();
        length = other.length;
        height = other.height;
        fields = other.fields;
    }
    return *this;
}

// Определение оператора сравнения
bool board::operator==(const board& other) const {
    return length == other.length && height == other.height && fields == other.fields;
}

// Определение метода для освобождения памяти
    void board::release(){
    length = 0;
    height = 0;
    fields.clear();
}

void board::initialize_board(int length, int height) {
    fields = std::vector<std::vector<field_type>>(length, std::vector<field_type>(height, empty));
}

// Определение оператора вывода
std::ostream& operator<<(std::ostream& os, const board& b) {
    for (const auto& row : b.fields) {
        for (field_type cell : row) {
            os << static_cast<int>(cell) << " ";
        }
        os << std::endl;
    }
    return os;
}

// Определение оператора ввода
std::istream& operator>>(std::istream& is, board& b) {
    for (auto& row : b.fields) {
        for (field_type& cell : row){
          int value;
          is >> value;
          cell = static_cast<field_type>(value);
        }
    }
    return is;
}
