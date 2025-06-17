/*
Условие задачи 269:
269. Напишите функцию, устанавливающую определённый бит в числе.
*/

#include <stdio.h>

int set_bit(int num, int pos)
{
    return num | (1 << pos); // Устанавливает бит в позиции pos
}

int main()
{
    int num = 5;                                  // 0101 в двоичном виде
    int pos = 1;                                  // Установим 1-й бит
    printf("Результат: %d\n", set_bit(num, pos)); // 7 (0111)
    return 0;
}
