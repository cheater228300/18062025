/*
Условие задачи 056:
56. Проверьте, попадает ли число в диапазон от 1 до 10.
*/

#include <stdio.h>

int main()
{
    int number;

    printf("Введите число: ");
    scanf("%d", &number);

    if (number >= 1 && number <= 10)
    {
        printf("%d — попадает в диапазон [1, 10].\n", number);
    }
    else
    {
        printf("%d — НЕ попадает в диапазон [1, 10].\n", number);
    }

    return 0;
}
