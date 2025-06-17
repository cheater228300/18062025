/*
Условие задачи 297:
297. Напишите программу, демонстрирующую использование register переменной.
*/

#include <stdio.h>

int main() {
    register int counter;  // совет компилятору хранить переменную в регистре процессора

    int sum = 0;
    for (counter = 0; counter < 10; counter++) {
        sum += counter;
    }

    printf("Сумма чисел от 0 до 9 = %d\n", sum);
    return 0;
}
