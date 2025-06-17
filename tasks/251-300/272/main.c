/*
Условие задачи 272:
272. Переверните значение конкретного бита.
*/

#include <stdio.h>

// Переворачивает бит с индексом bit_index (нумерация с 0) в числе num
unsigned int flip_bit(unsigned int num, int bit_index) {
    return num ^ (1 << bit_index);
}

int main() {
    unsigned int number = 42; // 0b101010
    int bit_to_flip = 1;

    printf("Исходное число: %u (0b", number);
    for (int i = 7; i >= 0; i--) printf("%d", (number >> i) & 1);
    printf(")\n");

    unsigned int flipped = flip_bit(number, bit_to_flip);

    printf("После переворота бита %d: %u (0b", bit_to_flip, flipped);
    for (int i = 7; i >= 0; i--) printf("%d", (flipped >> i) & 1);
    printf(")\n");

    return 0;
}

