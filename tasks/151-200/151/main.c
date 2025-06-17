/*
Условие задачи 151:
151. Создайте массив указателей на функции, реализующих разные математические операции, и вызовите каждую из них.
*/

#include <stdio.h>

// Прототипы функций
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int main() {
    // Массив указателей на функции
    int (*operations[4])(int, int) = {add, subtract, multiply, divide};
    
    int a = 10, b = 5;
    
    // Вызов всех функций через массив указателей
    printf("%d + %d = %d\n", a, b, operations[0](a, b));
    printf("%d - %d = %d\n", a, b, operations[1](a, b));
    printf("%d * %d = %d\n", a, b, operations[2](a, b));
    printf("%d / %d = %d\n", a, b, operations[3](a, b));
    
    return 0;
}

// Реализации функций
int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) { return a / b; }
