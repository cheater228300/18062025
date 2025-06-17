/*
Условие задачи 283:
283. Напишите программу, которая инвертирует все биты числа.
*/

#include <stdio.h>

int main() {
    unsigned int n;
    printf("Введите число: ");
    scanf("%u", &n);

    unsigned int inverted = ~n;

    printf("Оригинал:  %u\n", n);
    printf("Инверсия: %u\n", inverted);

    return 0;
}
