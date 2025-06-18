/*
Условие задачи 164:
164. Напишите программу, которая заполняет массив случайными числами и выводит только уникальные элементы.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int size = 20;
    int arr[size];

    srand(time(NULL)); // инициализация генератора случайных чисел

    // Заполнение массива случайными числами от 0 до 29
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 30;
    }

    printf("Сгенерированный массив:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nУникальные элементы:\n");

    for (int i = 0; i < size; i++) {
        int is_unique = 1;
        // Проверяем, встречалось ли arr[i] раньше
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                is_unique = 0;
                break;
            }
        }
        if (is_unique) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}
