/*
Условие задачи 109:
109. Напишите программу, которая выводит все числа Фибоначчи меньше заданного значения N.
*/

#include <stdio.h>

int main() {
    int N;
    printf("Введите число N: ");
    scanf("%d", &N);

    int a = 0, b = 1;

    printf("Числа Фибоначчи меньше %d:\n", N);

    while (a < N) {
        printf("%d ", a);
        int next = a + b;
        a = b;
        b = next;
    }

    printf("\n");
    return 0;
}
