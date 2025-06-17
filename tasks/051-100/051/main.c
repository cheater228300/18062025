/*
Условие задачи 051:
51. Напишите программу, которая преобразует строку в верхний регистр без использования стандартной библиотеки.
*/

#include <stdio.h>

void toUpperCase(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - ('a' - 'A');
        }
        i++;
    }
}

int main()
{
    char str[100];

    printf("Введите строку: ");
    fgets(str, sizeof(str), stdin);

    toUpperCase(str);
    printf("Результат: %s", str);

    return 0;
}
