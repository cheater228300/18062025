/*
Условие задачи 275:
275. Сдвиньте число вправо на N битов и объясните результат.
*/

#include <stdio.h>

int main() {
    unsigned int number = 40;  // 0b00101000
    int n = 3;

    unsigned int result = number >> n;

    printf("Исходное число: %u (0b", number);
    for (int i = 7; i >= 0; i--) printf("%d", (number >> i) & 1);
    printf(")\n");

    printf("После сдвига вправо на %d бита: %u (0b", n, result);
    for (int i = 7; i >= 0; i--) printf("%d", (result >> i) & 1);
    printf(")\n");

    return 0;
}

