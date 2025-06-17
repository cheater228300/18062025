/*
Условие задачи 247:
247. Скомпилируйте многофайловый проект вручную с использованием gcc -c.
*/

// main.c
#include <stdio.h>
// #include "math_utils.h"

int main() {
    printf("2 + 3 = %d\n", add(2, 3));
    printf("5 - 2 = %d\n", sub(5, 2));
    return 0;
}
// // math_utils.c
// #include "math_utils.h"

// int add(int a, int b) {
//     return a + b;
// }

// int sub(int a, int b) {
//     return a - b;
// }
// // math_utils.h
// #ifndef MATH_UTILS_H
// #define MATH_UTILS_H

// int add(int a, int b);
// int sub(int a, int b);

// #endif



// gcc -c main.c        # создаёт main.o
// gcc -c math_utils.c  # создаёт math_utils.o
// gcc main.o math_utils.o -o program  # линковка в исполняемый файл

