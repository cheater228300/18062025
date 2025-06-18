/*
Условие задачи 173:
173. Используйте указатель на функцию.
*/

#include <stdio.h>

// Функция, которую будем вызывать через указатель
int multiply(int a, int b) {
    return a * b;
}

int main() {
    // Объявляем указатель на функцию, принимающую два int и возвращающую int
    int (*funcPtr)(int, int) = multiply;

    int x = 5, y = 7;

    // Вызов функции через указатель
    int result = funcPtr(x, y);

    printf("Результат умножения %d и %d: %d\n", x, y, result);

    return 0;
}
