/*
Условие задачи 298:
298. Напишите программу, демонстрирующую работу inline функции.
*/

#include <stdio.h>

// Объявляем inline функцию для сложения двух чисел
inline int add(int a, int b) {
    return a + b;
}

int main() {
    int x = 5, y = 7;
    int result = add(x, y);
    printf("%d + %d = %d\n", x, y, result);
    return 0;
}
