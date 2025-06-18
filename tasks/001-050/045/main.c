/*
Условие задачи 045:
45. Напишите программу, меняющую регистр букв в строке.
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("Введите строку: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i]))
            str[i] = toupper(str[i]);
        else if (isupper(str[i]))
            str[i] = tolower(str[i]);
    }

    printf("Преобразованная строка: %s", str);
    return 0;
}
