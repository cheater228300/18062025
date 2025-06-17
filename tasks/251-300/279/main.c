/*
Условие задачи 279:
279. Напишите функцию, которая устанавливает N младших битов числа в 1.
*/

#include <stdio.h>

// Устанавливает N младших битов в 1
unsigned int set_low_bits(unsigned int num, int n) {
    unsigned int mask = (1U << n) - 1; // создаёт маску с n единицами
    return num | mask;
}

int main() {
    unsigned int number = 0b10010000; // 144
    int n = 4;

    unsigned int result = set_low_bits(number, n);

    printf("До : 0b");
    for (int i = 7; i >= 0; i--) printf("%d", (number >> i) & 1);
    printf("\n");

    printf("После установки %d младших битов: 0b", n);
    for (int i = 7; i >= 0; i--) printf("%d", (result >> i) & 1);
    printf("\n");

    return 0;
}

