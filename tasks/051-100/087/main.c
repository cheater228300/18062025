/*
Условие задачи 087:
87. Напишите программу, возвращающую разные коды ошибок.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Ошибка: не указаны аргументы.\n");
        return 1; // Код ошибки 1
    }

    int num = atoi(argv[1]);
    if (num <= 0) {
        printf("Ошибка: число должно быть положительным.\n");
        return 2; // Код ошибки 2
    }

    printf("Успех: введено число %d.\n", num);
    return 0; // Успешное завершение
}

// Вывод:
// ./program 5
// echo $? # Выведет 0 (успех)

// ./program -3
// echo $? # Выведет 2 (ошибка)
