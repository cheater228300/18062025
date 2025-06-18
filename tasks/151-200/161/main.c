/*
Условие задачи 161:
161. Передайте, массив в другую функцию для изменения.
*/

#include <stdio.h>

// Функция, которая увеличивает каждый элемент массива на 1
void incrementArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] += 1;
    }
}

int main() {
    int myArray[] = {1, 2, 3, 4, 5};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    printf("Массив до изменения: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", myArray[i]);
    }
    printf("\n");

    incrementArray(myArray, size);

    printf("Массив после изменения: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", myArray[i]);
    }
    printf("\n");

    return 0;
}
