#include <iostream>

void matrix_multiply(int matrix1[100][100], int matrix2[100][100], int outputMatrix[100][100], int r1, int c1, int r2, int c2) {
    for(int i = 0; i < r1; ++i) {
        for(int j = 0; j < c2; ++j) {
            outputMatrix[i][j] = 0;
        }
    }

    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            for (int k = 0; k < c1; ++k) {
                outputMatrix[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main() {
    int matrix1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int matrix2[3][2] = {{7, 8}, {9, 10}, {11, 12}};
    int result[2][2]; 

    matrix_multiply(matrix1, matrix2, result, 2, 3, 3, 2);

    for(int i = 0; i < 2; ++i) {
        for(int j = 0; j < 2; ++j) {
            std::cout << result[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
