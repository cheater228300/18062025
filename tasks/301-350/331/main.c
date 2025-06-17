/*
Условие задачи 331:
331. Реализуйте функцию, которая проверяет, содержит ли массив хотя бы одно повторяющееся значение.
*/

#include <stdio.h>
#include <stdbool.h>

bool has_duplicates(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j])
                return true;
        }
    }
    return false;
}

int main() {
    int a[] = {3, 1, 4, 2, 5, 3};
    int size = sizeof(a) / sizeof(a[0]);

    if (has_duplicates(a, size))
        printf("Массив содержит дубликаты.\n");
    else
        printf("Массив не содержит дубликатов.\n");

    return 0;
}
