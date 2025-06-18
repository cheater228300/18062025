/*
Условие задачи 172:
172. Напишите функцию, принимающую указатель на массив и изменяющую его.
*/

#include <stdio.h>

// Функция увеличивает каждый элемент массива на 10
void addTen(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] += 10;
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

    addTen(myArray, size);

    printf("Массив после изменения: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", myArray[i]);
    }
    printf("\n");

    return 0;
}
