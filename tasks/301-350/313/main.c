// Задача 313 Напишите программу, которая принимает два числа и операцию (+, -, *, /) как аргументы и выполняет соответствующее математическое действие.
#include <stdio.h>

int main() {
    int a, b;
    char d;
    printf("Введите значение для действие, b и a:\n");
    d = getchar();
    scanf("%d", &a);
    scanf("%d", &b);
    int res;
    switch (d)
    {
    case '+':
        res = a + b;
        break;
    case '-':
        res = a - b;
        break;
    case '*':
        res = a * b;
        break;
    case '/':
        res = a / b;
        break;
    default:
        break;
    }
    printf("res = %d", res);
    return 0;
}
