/*
Условие задачи 271:
271. Проверьте, установлен ли определённый бит в числе.
*/

#include <stdio.h>
#include <stdbool.h>

// Проверяет, установлен ли бит под номером bit_index (нумерация с 0)
bool is_bit_set(unsigned int num, int bit_index) {
    return (num & (1 << bit_index)) != 0;
}

int main() {
    unsigned int number = 42; // 0b101010
    int bit_to_check = 3;

    if (is_bit_set(number, bit_to_check)) {
        printf("Бит %d установлен в числе %u\n", bit_to_check, number);
    } else {
        printf("Бит %d НЕ установлен в числе %u\n", bit_to_check, number);
    }

    return 0;
}

