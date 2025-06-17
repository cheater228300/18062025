/*
Условие задачи 058:
58. Составьте сложное условие, используя несколько операций сравнения.
*/

#include <stdio.h>

int main()
{
    int number;

    printf("Введите число: ");
    scanf("%d", &number);

    if (number < 0 && number % 3 == 0)
    {
        printf("Условие 1: отрицательное и делится на 3.\n");
    }
    else if (number >= 10 && number <= 20 && number % 2 == 0)
    {
        printf("Условие 2: 10-20 и чётное.\n");
    }
    else if (number == 100)
    {
        printf("Условие 3: равно 100.\n");
    }
    else
    {
        printf("Не подходит ни под одно условие.\n");
    }

    return 0;
}
