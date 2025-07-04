/*
Условие задачи 119:
119. Реализуйте программу, которая выводит на экран сумму первых N натуральных чисел, которые делятся на 3 или на 5.
*/
#include <stdio.h>

int main() {
    int N;
    printf("Введите количество чисел N: ");
    scanf("%d", &N);

    int count = 0;   // сколько чисел уже найдено
    int sum = 0;
    int num = 1;

    while (count < N) {
        if (num % 3 == 0 || num % 5 == 0) {
            sum += num;
            count++;
        }
        num++;
    }

    printf("Сумма первых %d чисел, делящихся на 3 или 5: %d\n", N, sum);

    return 0;
}

