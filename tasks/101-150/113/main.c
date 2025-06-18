/*
Условие задачи 113:
113. Напишите программу, которая находит сумму всех двузначных чисел, кратных 3.
*/

#include <stdio.h>

int main() {
    int sum = 0;
    int i = 10;
    while (i <= 99) {
        if (i % 3 == 0) {
            sum += i;
        }
        i++;
    }
    printf("Sum of two-digit numbers divisible by 3: %d\n", sum);
    return 0;
}
