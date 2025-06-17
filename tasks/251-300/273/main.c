/*
Условие задачи 273:
273. Напишите функцию, которая меняет местами два бита в числе.
*/

#include <stdio.h>

// Меняет местами биты с позициями i и j в числе num
unsigned int swap_bits(unsigned int num, int i, int j) {
    // Получаем значения битов на позициях i и j
    unsigned int bit_i = (num >> i) & 1;
    unsigned int bit_j = (num >> j) & 1;

    // Если биты равны, менять нечего
    if (bit_i == bit_j)
        return num;

    // Создаём маску с двумя битами i и j
    unsigned int mask = (1 << i) | (1 << j);

    // Переворачиваем эти два бита с помощью XOR
    return num ^ mask;
}

int main() {
    unsigned int num = 0b10101010; // 170 в десятичной
    int i = 1;
    int j = 6;

    printf("Исходное число: %u (0b", num);
    for (int k = 7; k >= 0; k--) printf("%d", (num >> k) & 1);
    printf(")\n");

    unsigned int swapped = swap_bits(num, i, j);

    printf("После обмена битов %d и %d: %u (0b", i, j, swapped);
    for (int k = 7; k >= 0; k--) printf("%d", (swapped >> k) & 1);
    printf(")\n");

    return 0;
}

