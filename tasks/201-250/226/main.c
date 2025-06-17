/*Условие задачи 226:
226. Напишите программу, которая выделяет массив из 10 целых чисел с помощью malloc, заполняет его числами от 1 до 10 и выводит на экран.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = malloc(10 * sizeof(int));
    if (!arr) {
        printf("Ошибка выделения памяти\n");
        return 1;
    }

    // Заполнение массива
    for (int i = 0; i < 10; i++) {
        arr[i] = i + 1;
    }

    // Вывод массива
    printf("Массив: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    free(arr); // Освобождение памяти
    return 0;
}
