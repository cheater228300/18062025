/*
Условие задачи 057:
57. Реализуйте проверку истинности условия: число положительное и нечетное.
*/

#include <stdio.h>

int main()
{
    int number;

    printf("Введите число: ");
    scanf("%d", &number);

    if (number > 0 && number % 2 != 0)
    {
        printf("%d — положительное и нечётное.\n", number);
    }
    else
    {
        printf("%d — число не положительное и четное.\n", number);
    }

    return 0;
}
