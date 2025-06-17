/*
Условие задачи 285:
285. Реализуйте бинарный поиск в отсортированном массиве.
*/

#include <stdio.h>

int binary_search(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == target)
            return mid;  // найден элемент
        else if (arr[mid] < target)
            left = mid + 1;  // ищем справа
        else
            right = mid - 1; // ищем слева
    }

    return -1; // элемент не найден
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 15, 20};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Введите число для поиска: ");
    scanf("%d", &target);

    int index = binary_search(arr, size, target);
    if (index != -1)
        printf("Элемент найден на позиции: %d\n", index);
    else
        printf("Элемент не найден\n");

    return 0;
}
