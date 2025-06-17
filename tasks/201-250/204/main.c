/*
Условие задачи 204:
204. Напишите программу, которая принимает указатель на математическую функцию (int func(int x)) и строит таблицу значений этой функции на заданном интервале.
*/

#include <stdio.h>

// Функция, которая строит таблицу значений func на интервале [start, end]
void print_table(int (*func)(int), int start, int end) {
    printf(" x | f(x) \n");
    printf("---|-------\n");
    for (int x = start; x <= end; x++) {
        printf("%2d | %5d\n", x, func(x));
    }
}

// Пример функции: квадрат числа
int square(int x) {
    return x * x;
}

int main() {
    int start = 1, end = 10;

    // Выводим таблицу значений функции square от 1 до 10
    print_table(square, start, end);

    return 0;
}

