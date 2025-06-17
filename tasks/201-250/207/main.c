/*
Условие задачи 207:
207. Создайте массив указателей на функции, реализующих разные математические операции, и вызовите каждую из них.
*/

#include <stdio.h>

typedef int (*math_op)(int, int);

int add(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}
int multiply(int a, int b) {
    return a * b;
}
int divide(int a, int b) {
    if (b == 0) {
        printf("Ошибка: деление на ноль!\n");
        return 0;
    }
    return a / b;
}

int main() {
    math_op ops[] = {add, subtract, multiply, divide};
    const char *names[] = {"Сложение", "Вычитание", "Умножение", "Деление"};
    int x = 20, y = 5;

    for (int i = 0; i < 4; i++) {
        int result = ops[i](x, y);
        printf("%s: %d %c %d = %d\n", names[i], x,
               (i == 0 ? '+' : i == 1 ? '-' : i == 2 ? '*' : '/'), y, result);
    }

    return 0;
}

