/*
Условие задачи 250:
250. Используйте make для автоматического построения проекта.
*/

// #include <stdio.h>
// #include "math_utils.h"

// int main() {
//     int a = 4, b = 5;
//     printf("Sum: %d\n", add(a, b));
//     printf("Product: %d\n", mul(a, b));
//     return 0;
// }

// 📄 math_utils.c

// #include "math_utils.h"

// int add(int a, int b) {
//     return a + b;
// }

// int mul(int a, int b) {
//     return a * b;
// }

// 📄 math_utils.h
// c
// Копировать код
// #ifndef MATH_UTILS_H
// #define MATH_UTILS_H

// int add(int a, int b);
// int mul(int a, int b);

// #endif

// # Имя финального исполняемого файла
// TARGET = program

// # Все объектные файлы
// OBJS = main.o math_utils.o

// # Правило по умолчанию
// all: $(TARGET)

// # Как собрать исполняемый файл
// $(TARGET): $(OBJS)
// 	gcc $(OBJS) -o $(TARGET)

// # Как собрать каждый .o из .c
// %.o: %.c
// 	gcc -c $< -o $@

// # Очистка
// clean:
// 	rm -f *.o $(TARGET)
