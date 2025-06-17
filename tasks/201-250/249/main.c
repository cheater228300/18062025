/*
Условие задачи 249:
249. Протестируйте сборку проекта с несколькими зависимостями.
*/

#include <stdio.h>
#include <stdlib.h>

// project/
// ├── main.c
// ├── math_utils.c
// ├── math_utils.h
// ├── io_utils.c
// ├── io_utils.h
// └── Makefile

// #include "math_utils.h"
// #include "io_utils.h"

// int main() {
//     int a = 5, b = 3;
//     print_result("Sum", add(a, b));
//     print_result("Product", mul(a, b));
//     return 0;
// }


// math_utils.h
// #ifndef MATH_UTILS_H
// #define MATH_UTILS_H

// int add(int a, int b);
// int mul(int a, int b);

// #endif

// math_utils.c
// #include "math_utils.h"

// int add(int a, int b) {
//     return a + b;
// }

// int mul(int a, int b) {

//     return a * b;
// }

// io_utils.h
// #ifndef IO_UTILS_H
// #define IO_UTILS_H

// void print_result(const char* label, int value);

// #endif

// io_utils.c
// #include <stdio.h>
// #include "io_utils.h"

// void print_result(const char* label, int value) {
//     printf("%s: %d\n", label, value);
// }


// gcc -c math_utils.c
// gcc -c io_utils.c
// gcc -c main.c
// gcc main.o math_utils.o io_utils.o -o program


// all: program

// program: main.o math_utils.o io_utils.o
// 	gcc $^ -o $@

// %.o: %.c
// 	gcc -c $< -o $@

// clean:
// 	rm -f *.o program
