/*
Условие задачи 102:
102. Напишите программу, которая выводит числа от 1 до 20 с помощью цикла while.
*/

#include <stdio.h>

int main() {
    int i = 1;
    while (i <= 20) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
    return 0;
}
