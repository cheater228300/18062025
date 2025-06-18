/*
Условие задачи 096:
96. Напишите программу, которая выводит на экран числа от 1 до N, заменяя те, что делятся на 3 — "Fizz", на 5 — "Buzz", на оба — "FizzBuzz".
*/

#include <stdio.h>

int main() {
    int N;
    printf("Введите N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        if (i % 3 == 0 && i % 5 == 0)
            printf("FizzBuzz\n");
        else if (i % 3 == 0)
            printf("Fizz\n");
        else if (i % 5 == 0)
            printf("Buzz\n");
        else
            printf("%d\n", i);
    }

    return 0;
}
