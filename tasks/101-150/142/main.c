/*Условие задачи 142:
142. Определите прототип функции и реализуйте её в другом файле.
Сборка: gcc main.c header.c -o main */

#include <stdio.h>
#include <stdlib.h>
void hello_func();
int main() {
    hello_func();
    return 0;
}
