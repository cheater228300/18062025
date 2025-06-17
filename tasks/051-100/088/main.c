/*
Условие задачи 088:
88. Напишите программу, которая вычисляет сумму всех целых чисел от 1 до N с использованием цикла for.
*/

#include <stdio.h>

int calculateSum(int N) {
    int sum = 0;
    
    if (N >= 1) {
        // Сумма положительных чисел: 1 + 2 + ... + N
        for (int i = 1; i <= N; i++) {
            sum += i;
        }
    } else {
        // Сумма отрицательных чисел: 1 + 0 + (-1) + (-2) + ... + N
        for (int i = 1; i >= N; i--) {
            sum += i;
        }
    }
    
    return sum;
}

int main() {
    int N;
    
    printf("Введите целое число N: ");
    if (scanf("%d", &N) != 1) {
        printf("Ошибка: нужно ввести целое число!\n");
        return 1;
    }

    printf("Сумма чисел от 1 до %d: %d\n", N, calculateSum(N));
    
    return 0;
}
