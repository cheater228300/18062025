/*
Условие задачи 086:
86. Реализуйте переход по метке с помощью goto.
*/

#include <stdio.h>

int main() {
    int i = 0;

start: // Метка
    printf("%d ", i);
    i++;
    
    if (i < 5) {
        goto start; // Переход к метке
    }
    
    printf("\nЦикл завершен.\n");
    return 0;
}
