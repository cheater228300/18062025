/*
Условие задачи 274:
274. Подсчитайте количество установленных битов в числе.
*/

#include <stdio.h>

// Подсчёт количества установленных битов (единиц) в числе
int count_set_bits(unsigned int num) {
    int count = 0;
    while (num) {
        count += num & 1;  // Прибавляем 1, если младший бит равен 1
        num >>= 1;         // Сдвигаем число вправо на 1 бит
    }
    return count;
}

int main() {
    unsigned int number = 29; // 0b11101
    int result = count_set_bits(number);
    printf("В числе %u установлено %d бит(а)\n", number, result);
    return 0;
}

