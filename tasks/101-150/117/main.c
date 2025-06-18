/*
Условие задачи 117:
117. Создайте программу, которая выводит на экран все совершенные числа в диапазоне от 2 до N. Совершенное число — это число, равное сумме своих делителей, кроме самого себя.
*/

#include <stdio.h>

int main() {
    int N;
    printf("Введите число N: ");
    scanf("%d", &N);

    printf("Совершенные числа в диапазоне от 2 до %d:\n", N);

    for (int num = 2; num <= N; num++) {
        int sum_div = 0;
        for (int div = 1; div < num; div++) {
            if (num % div == 0) {
                sum_div += div;
            }
        }
        if (sum_div == num) {
            printf("%d ", num);
        }
    }

    printf("\n");
    return 0;
}
