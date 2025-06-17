/*
Условие задачи 270:
270. Реализуйте функцию, очищающую (обнуляющую) конкретный бит числа.
*/

#include <stdio.h>

int clear_bit(int num, int pos)
{
    return num & ~(1 << pos); // Очищает бит в позиции pos
}

int main()
{
    int num = 7;                                    // 0111 в двоичном виде
    int pos = 1;                                    // Очистим 1-й бит
    printf("Результат: %d\n", clear_bit(num, pos)); // 5 (0101)
    return 0;
}
