/*
Условие задачи 168:
168. Напишите функцию, которая объединяет два отсортированных массива в один отсортированный.
*/

#include <stdio.h>

void mergeSortedArrays(int arr1[], int size1, int arr2[], int size2, int result[]) {
    int i = 0, j = 0, k = 0;

    // Сливаем два массива, сравнивая элементы
    while (i < size1 && j < size2) {
        if (arr1[i] <= arr2[j]) {
            result[k++] = arr1[i++];
        } else {
            result[k++] = arr2[j++];
        }
    }

    // Копируем оставшиеся элементы из arr1, если есть
    while (i < size1) {
        result[k++] = arr1[i++];
    }

    // Копируем оставшиеся элементы из arr2, если есть
    while (j < size2) {
        result[k++] = arr2[j++];
    }
}

int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8, 10};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int result[size1 + size2];

    mergeSortedArrays(arr1, size1, arr2, size2, result);

    printf("Объединённый отсортированный массив:\n");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
