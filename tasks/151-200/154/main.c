/*
Условие задачи 154:
154. Найдите максимальный элемент в массиве.
*/

#include <stdio.h>

int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[] = {3, 7, 2, 9, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("Максимальный элемент: %d\n", findMax(arr, size));
    
    return 0;
}
