/*
Условие задачи 280:
280. Реализуйте функцию, которая очищает все биты числа, кроме K старших.
*/

#include <stdio.h>

// Очищает все биты, кроме K старших (для 32-битных чисел)
unsigned int keep_top_k_bits(unsigned int num, int k) {
    if (k >= 32) return num;       // все биты остаются
    if (k <= 0) return 0;          // всё очищается

    unsigned int mask = ~((1U << (32 - k)) - 1); // маска с K старшими битами = 1
    return num & mask;
}

int main() {
    unsigned int number = 0b11101100101010001111000000001111;
    int k = 8;

    unsigned int result = keep_top_k_bits(number, k);

    printf("До : 0x%08X\n", number);
    printf("После оставления %d старших битов: 0x%08X\n", k, result);

    return 0;
}

