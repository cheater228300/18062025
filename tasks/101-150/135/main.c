/*
Условие задачи 135:
135. Напишите функцию, вычисляющую факториал числа.
*/

#include <stdio.h>

// Функция вычисления факториала n (для n >= 0)
unsigned long long factorial(int n) {
    if (n < 0) {
        return 0; // Факториал для отрицательных чисел не определён
    }

    unsigned long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int num = 5;
    printf("Факториал %d = %llu\n", num, factorial(num));
    return 0;
}

