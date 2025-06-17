/*
Условие задачи 286:
286. Напишите функцию, принимающую строку и возвращающую её длину.
*/

#include <stdio.h>

int my_strlen(const char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[100];
    printf("Введите строку: ");
    fgets(str, sizeof(str), stdin);

    // Убираем символ новой строки, если он есть
    int len = my_strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    printf("Длина строки: %d\n", len);

    return 0;
}
