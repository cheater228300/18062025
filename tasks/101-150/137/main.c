/*
Условие задачи 137:
137. Напишите функцию void swap(int *a, int *b), которая меняет местами значения двух переменных через указатели.
*/

#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;  // сохраняем значение по адресу a
    *a = *b;        // копируем значение по адресу b в a
    *b = temp;      // записываем сохранённое значение в b
}

int main() {
    int x = 10, y = 20;
    printf("До swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("После swap: x = %d, y = %d\n", x, y);
    return 0;
}
