/*
Условие задачи 333:
333. Создайте функцию, которая принимает массив целых чисел и возвращает указатель на динамически выделенный массив, содержащий только уникальные значения.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Проверяет, есть ли значение в массиве
bool contains(int* arr, int size, int value) {
    for (int i = 0; i < size; i++)
        if (arr[i] == value)
            return true;
    return false;
}

// Возвращает новый массив с уникальными значениями
int* unique_values(int* input, int size, int* out_size) {
    int* result = malloc(size * sizeof(int)); // максимум — все уникальные
    if (!result) return NULL;

    int count = 0;

    for (int i = 0; i < size; i++) {
        if (!contains(result, count, input[i])) {
            result[count++] = input[i];
        }
    }

    *out_size = count;
    return result;
}

int main() {
    int data[] = {1, 3, 5, 3, 7, 1, 9, 5};
    int size = sizeof(data) / sizeof(data[0]);

    int unique_count;
    int* unique = unique_values(data, size, &unique_count);

    if (unique) {
        printf("Уникальные значения: ");
        for (int i = 0; i < unique_count; i++)
            printf("%d ", unique[i]);
        printf("\n");

        free(unique);
    } else {
        printf("Ошибка выделения памяти.\n");
    }

    return 0;
}

