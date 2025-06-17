/*
Условие задачи 020:
20. Определите перечисление Color, содержащее значения RED, GREEN, BLUE. Объявите переменную этого типа, присвойте ей значение и выведите на экран.
*/

#include <stdio.h>

enum Color { RED, GREEN, BLUE };  // RED=0, GREEN=1, BLUE=2

int main() {
    enum Color color = GREEN;  // Присваиваем значение
    printf("Цвет: %d\n", color);  // Выведет 1 (GREEN)
    
    return 0;
}
