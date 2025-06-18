/*
Условие задачи 114:
114. Создайте программу, которая выводит таблицу степеней числа 2 от 2¹ до тех пор, пока результат не превысит 1000.
*/

#include <stdio.h>

int main() {
    int power = 1;
    int result = 2;
    printf("Powers of 2:\n");
    printf("n    2^n\n");
    printf("--------\n");
    while (result <= 1000) {
        printf("%d    %d\n", power, result);
        power++;
        result *= 2;
    }
    return 0;
}
