/*
Условие задачи 162:
162. Напишите программу, создающую двумерный массив.
*/

#include <stdio.h>

int main() {
    int rows = 3;
    int cols = 4;
    int matrix[3][4];

    // Заполнение массива значениями
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = i * cols + j + 1;  // просто пример значений
        }
    }

    // Вывод массива
    printf("Двумерный массив %d x %d:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
