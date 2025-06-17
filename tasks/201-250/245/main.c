// Задача 245Напишите программу, которая использует инструменты valgrind для 
//проверки утечек памяти при работе с динамически выделенными массивами.
#include <stdio.h>
#include <stdlib.h>

/* Фильтрует массив, оставляя только чётные числа */
int* filter_even(const int* arr, int size, int* new_size) {
    // Считаем количество чётных чисел
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }

    // Выделяем память под новый массив
    int* result = malloc(count * sizeof(int));
    if (result == NULL) {
        *new_size = 0;
        return NULL;
    }

    // Заполняем массив чётными числами
    int index = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            result[index++] = arr[i];
        }
    }

    *new_size = count;
    return result;
}

/* Освобождает память и обнуляет указатель */
void free_array(int** arr) {
    if (arr != NULL && *arr != NULL) {
        free(*arr);
        *arr = NULL; // Защита от "висячих указателей"
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    int new_size;
    int* filtered = filter_even(arr, size, &new_size);

    if (filtered != NULL) {
        printf("Отфильтрованный массив (чётные числа): ");
        for (int i = 0; i < new_size; i++) {
            printf("%d ", filtered[i]);
        }
        printf("\n");

        free_array(&filtered); // Корректное освобождение памяти
    } else {
        printf("Ошибка выделения памяти.\n");
    }

    return 0;
}/*
gcc -g -o my_program main.c
valgrind --leak-check=full --show-leak-kinds=all ./my_program
*/
