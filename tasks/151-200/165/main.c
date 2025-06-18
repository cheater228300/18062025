/*
Условие задачи 165:
165. Реализуйте функцию, которая находит второй по величине элемент в массиве целых чисел.
*/

#include <stdio.h>
#include <limits.h>

// Функция возвращает второй по величине элемент массива
// Если второго по величине нет (все элементы одинаковы), возвращает INT_MIN
int secondLargest(int arr[], int size) {
    int max = INT_MIN;
    int second_max = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            second_max = max;
            max = arr[i];
        } else if (arr[i] > second_max && arr[i] < max) {
            second_max = arr[i];
        }
    }

    return second_max;
}

int main() {
    int arr[] = {5, 7, 3, 9, 9, 2, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = secondLargest(arr, size);

    if (result == INT_MIN) {
        printf("Второго по величине элемента нет.\n");
    } else {
        printf("Второй по величине элемент: %d\n", result);
    }

    return 0;
}
