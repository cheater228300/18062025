/*
Условие задачи 277:
277. Создайте маску из диапазона битов и примените её к числу.
*/

#include <stdio.h>

// Извлекает биты от start до end включительно (нумерация с 0, от младших к старшим)
unsigned int extract_bits(unsigned int num, int start, int end) {
    // Создание маски: (1 << (end - start + 1)) - 1 дает столько единиц, сколько битов нужно
    unsigned int mask = ((1U << (end - start + 1)) - 1) << start;
    // Применение маски и сдвиг к младшим битам
    return (num & mask) >> start;
}

int main() {
    unsigned int number = 0b11011101; // 221
    int start = 2;
    int end = 5;

    unsigned int result = extract_bits(number, start, end);

    printf("Число:        0b");
    for (int i = 7; i >= 0; i--) printf("%d", (number >> i) & 1);

    printf("\nМаска битов %d-%d дала: %u (0b", start, end, result);
    for (int i = (end - start); i >= 0; i--) printf("%d", (result >> i) & 1);
    printf(")\n");

    return 0;
}

