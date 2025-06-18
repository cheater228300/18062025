/*
Условие задачи 106:
106. Напишите программу, которая вычисляет факториал числа N с использованием цикла while.
*/

#include <stdio.h>

int main() {
    int N;
    unsigned long long factorial = 1;

    printf("Введите число N: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("Факториал не определён для отрицательных чисел.\n");
        return 1;
    }

    int i = 1;
    while (i <= N) {
        factorial *= i;
        i++;
    }

    printf("Факториал числа %d равен %llu\n", N, factorial);

    return 0;
}
