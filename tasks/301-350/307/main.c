/*
Условие задачи 307:
307. Напишите программу, которая принимает несколько целых чисел в качестве аргументов и вычисляет их сумму.
gcc main.c -o main
./program 5 10 15
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Использование: %s число1 число2 ...\n", argv[0]);
        return 1;
    }

    int sum = 0;
    for (int i = 1; i < argc; i++) {
        sum += atoi(argv[i]);
    }

    printf("Сумма: %d\n", sum);
    return 0;
}
