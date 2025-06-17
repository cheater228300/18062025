/*
Условие задачи 065:
65. Подсчитайте сумму чисел от 1 до N с помощью while.
*/

#include <stdio.h>

int main() {
    int N;
    int sum = 0;
    int i = 1;

    printf("Введите число N: ");
    scanf("%d", &N);

    while (i <= N) {
        sum += i;
        i++;
    }

    printf("Сумма чисел от 1 до %d: %d\n", N, sum);
    return 0;
}
