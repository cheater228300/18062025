/*Условие задачи 311:
311. Напишите программу, которая принимает число из аргумента командной строки и вычисляет его факториал.*/

#include <stdio.h>
#include <stdlib.h>

unsigned long long factorial(int n) {
    if (n < 0) return 0; // Факториал не определён для отрицательных
    unsigned long long result = 1;
    for (int i = 2; i <= n; i++)
        result *= i;
    return result;
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Использование: %s число\n", argv[0]);
        return 1;
    }

    int n = atoi(argv[1]);
    if (n < 0) {
        printf("Ошибка: число должно быть неотрицательным\n");
        return 1;
    }

    printf("Факториал %d = %llu\n", n, factorial(n));
    return 0;
}
