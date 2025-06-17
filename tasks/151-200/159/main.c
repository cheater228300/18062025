/*
Условие задачи 159:
159. Напишите программу, находящую минимальное и максимальное значение.
*/

#include <stdio.h>

void findMinMax(int arr[], int size) {
    // Инициализируем min и max первым элементом
    int min = arr[0];
    int max = arr[0];

    // Проходим по массиву
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];  // Новый минимум
        }
        if (arr[i] > max) {
            max = arr[i];  // Новый максимум
        }
    }

    printf("Минимальное: %d\n", min);
    printf("Максимальное: %d\n", max);
}

int main() {
    int arr[] = {3, 7, 2, 9, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    findMinMax(arr, size);
    
    return 0;
}
