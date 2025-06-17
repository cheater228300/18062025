/*
Условие задачи 060:
60. Напишите программу, проверяющую, является ли число простым.
*/

#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int number;

    printf("Введите число: ");
    scanf("%d", &number);

    if (isPrime(number))
    {
        printf("%d — простое число.\n", number);
    }
    else
    {
        printf("%d — не является простым.\n", number);
    }

    return 0;
}
