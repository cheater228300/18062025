/*
Условие задачи 028:
28. Найдите остаток от деления с помощью %.
*/

#include <stdio.h>

int main() {
    int a = 17;
    int b = 5;

    int remainder = a % b;

    printf("Остаток от деления %d на %d равен %d\n", a, b, remainder);

    return 0;
}
