/*
Условие задачи 210:
210. Выполните пошаговое выполнение программы в GDB.
*/

#include <stdio.h>

int main() {
    int a = 5;
    int b = 3;
    int sum = a + b;
    printf("Сумма %d + %d = %d\n", a, b, sum);

    for (int i = 0; i < 3; i++) {
        printf("Итерация %d\n", i);
    }

    return 0;
}

//gcc -g main.c -o test
//gdb ./test
//break main
//run
//print b
//next
//quit


