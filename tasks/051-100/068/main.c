/*
Условие задачи 068:
68. Напишите программу, находящую все простые числа до N.
*/

#include <stdio.h>

int main() {
    int N;
    printf("Введите число N: ");
    scanf("%d", &N);

    printf("Простые числа от 2 до %d:\n", N);

    for (int num = 2; num <= N; num++) {
        int is_prime = 1;  // предполагаем, что число простое

        for (int div = 2; div * div <= num; div++) {
            if (num % div == 0) {
                is_prime = 0;  // делится нацело — не простое
                break;
            }
        }

        if (is_prime) {
            printf("%d ", num);
        }
    }

    printf("\n");
    return 0;
}
