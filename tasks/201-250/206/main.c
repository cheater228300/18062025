/*
Условие задачи 206:
206. Напишите функцию, принимающую указатель на функцию сравнения и массив, и возвращающую индекс минимального элемента.
*/

#include <stdio.h>

// Тип функции сравнения: возвращает отрицательное, 0 или положительное значение
// в зависимости от результата сравнения a и b (по аналогии с strcmp)
typedef int (*cmp_func)(int a, int b);

int find_min_index(int *arr, int size, cmp_func cmp) {
    if (size <= 0) return -1; // Ошибка, пустой массив

    int min_index = 0;
    for (int i = 1; i < size; i++) {
        if (cmp(arr[i], arr[min_index]) < 0) {
            min_index = i;
        }
    }
    return min_index;
}

// Пример функции сравнения (натуральный порядок)
int int_compare(int a, int b) {
    return a - b;
}

int main() {
    int data[] = {5, 3, 9, 1, 7};
    int n = sizeof(data) / sizeof(data[0]);

    int min_idx = find_min_index(data, n, int_compare);
    if (min_idx >= 0) {
        printf("Минимальный элемент: %d, индекс: %d\n", data[min_idx], min_idx);
    } else {
        printf("Массив пустой\n");
    }

    return 0;
}

