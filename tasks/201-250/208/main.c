/*
Условие задачи 208:
208. Напишите программу, демонстрирующую использование указателей на функции в структуре.
*/

#include <stdio.h>

// Структура с указателем на функцию, принимающую int и возвращающую void
typedef struct {
    const char *name;
    void (*func)(int);
} Operation;

// Пример функций
void print_square(int x) {
    printf("Квадрат %d = %d\n", x, x * x);
}

void print_double(int x) {
    printf("Удвоенное %d = %d\n", x, x * 2);
}

int main() {
    Operation ops[] = {
        {"Квадрат", print_square},
        {"Удвоение", print_double}
    };

    int n = sizeof(ops) / sizeof(ops[0]);

    for (int i = 0; i < n; i++) {
        printf("Выполняем операцию: %s\n", ops[i].name);
        ops[i].func(5);
    }

    return 0;
}

