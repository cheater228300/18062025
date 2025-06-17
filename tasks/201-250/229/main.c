/*
Условие задачи 229:
229. Напишите программу, которая создаёт двумерный массив (матрицу) размером MxN с использованием динамического выделения памяти и выводит его содержимое.
*/

#include <stdio.h>
#include <stdlib.h>

int* create_matrix(int rows, int cols) {
    // Выделяем память для всей матрицы как одного блока
    int* matrix = (int*)malloc(rows * cols * sizeof(int));
    if (matrix == NULL) return NULL;
    
    // Заполняем матрицу значениями
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i * cols + j] = i * cols + j + 1;
        }
    }
    
    return matrix;
}

void print_matrix(const int* matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%3d ", matrix[i * cols + j]);
        }
        printf("\n");
    }
}

int main() {
    int M = 3, N = 4;
    int* matrix = create_matrix(M, N);
    
    if (matrix != NULL) {
        printf("Matrix %dx%d:\n", M, N);
        print_matrix(matrix, M, N);
        free(matrix); // Освобождаем одним вызовом free
    } else {
        printf("Memory allocation failed!\n");
    }
    
    return 0;
}
