/*
Условие задачи 139:
139. Напишите функцию, которая находит максимальное значение в массиве с помощью указателей.
*/

#include <stdio.h>

int max_in_array(int *arr, int n) {
    if (n <= 0) return -2147483648;
    int max = *arr;
    int *ptr = arr + 1;
    for (int i = 1; i < n; i++, ptr++) {
        if (*ptr > max) {
            max = *ptr;
        }
    }
    return max;
}

int main() {
    int data[] = {10, 5, 20, 3, 15};
    int n = sizeof(data) / sizeof(data[0]);

    int maximum = max_in_array(data, n);
    printf("Максимальное значение в массиве: %d\n", maximum);

    return 0;
}

