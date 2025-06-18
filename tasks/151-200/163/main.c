/*
Условие задачи 163:
163. Реализуйте поиск элемента в массиве.
*/

#include <stdio.h>

int main() {
    int arr[] = {5, 3, 8, 6, 2, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Введите искомое число: ");
    scanf("%d", &target);

    int found = 0; // флаг для отслеживания нахождения элемента

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            printf("Число %d найдено в массиве на позиции %d.\n", target, i);
            found = 1;
            break; // можно прервать поиск после первого найденного
        }
    }

    if (!found) {
        printf("Число %d не найдено в массиве.\n", target);
    }

    return 0;
}
