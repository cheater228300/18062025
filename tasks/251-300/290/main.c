/*
Условие задачи 290:
290. Реализуйте функцию, копирующую строку.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <stdio.h>
#include <stdlib.h>

char* str_copy(const char* src) {
    // Считаем длину строки
    size_t len = 0;
    while (src[len] != '\0') {
        len++;
    }

    // Выделяем память под новую строку (+1 для '\0')
    char* dest = malloc(len + 1);
    if (!dest) return NULL;

    // Копируем символы по одному
    for (size_t i = 0; i <= len; i++) { // <= чтобы скопировать и '\0'
        dest[i] = src[i];
    }

    return dest;
}

int main() {
    const char* original = "Hello, world!";
    char* copy = str_copy(original);
    if (copy) {
        printf("Копия строки: %s\n", copy);
        free(copy);
    } else {
        printf("Ошибка выделения памяти\n");
    }
    return 0;
}
