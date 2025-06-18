/*
Условие задачи 288:
288. Напишите функцию, возвращающую индекс первого вхождения символа в строке.
*/

#include <stdio.h>

int indexOfChar(const char *str, char ch) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == ch)
            return i;
        i++;
    }
    return -1;  // символ не найден
}

int main() {
    const char *text = "Hello, world!";
    char ch = 'o';

    int index = indexOfChar(text, ch);
    if (index != -1)
        printf("Символ '%c' найден на позиции %d\n", ch, index);
    else
        printf("Символ '%c' не найден\n", ch);

    return 0;
}
