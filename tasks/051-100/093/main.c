/*
Условие задачи 093:
93. Реализуйте программу, которая выводит все делители заданного числа N.
*/

#include <stdio.h>

int main() {
    int N;
    printf("Введите число N: ");
    scanf("%d", &N);

    printf("Делители числа %d:\n", N);
    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
