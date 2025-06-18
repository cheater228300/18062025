/*
Условие задачи 187:
187. Напишите программу, которая демонстрирует влияние порядка полей на размер структуры.
*/

#include <stdio.h>

struct A {
    char c;      // 1 байт
    int i;       // 4 байта
    double d;    // 8 байт
};

struct B {
    double d;    // 8 байт
    int i;       // 4 байта
    char c;      // 1 байт
};

int main() {
    printf("Размер структуры A: %zu байт\n", sizeof(struct A));
    printf("Размер структуры B: %zu байт\n", sizeof(struct B));
    return 0;
}
