//
// Created by Fernando Rocha Correa Urbano on 3/29/24.
//
#include <iostream>

int main() {

    int (*matrix)[8] = new int[8][8];

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++){
            matrix[i][j] = 10 + i * 10 + j + 1;
        }
    }

    // print
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++){
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}