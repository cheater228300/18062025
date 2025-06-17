/*
Условие задачи 136:
136. Создайте функцию, принимающую массив и возвращающую сумму элементов.
*/

#include <stdio.h>

int sum_array(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int data[] = {1, 2, 3, 4, 5};
    int size = sizeof(data) / sizeof(data[0]);
    printf("Сумма элементов: %d\n", sum_array(data, size));
    return 0;
}
