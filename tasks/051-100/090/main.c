/*
Условие задачи 090:
90. Напишите программу, которая выводит числа от 1 до 100, которые делятся на 3 и 5 одновременно.
*/

#include <stdio.h>

int main() {
    printf("Числа от 1 до 100, делящиеся на 3 и 5:\n");
    
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
