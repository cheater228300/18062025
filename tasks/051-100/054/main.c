/*
Условие задачи 054:
54. Напишите программу, проверяющую, является ли число четным.
*/
int main()
{
    int number;

    printf("Введите число: ");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("%d — четное число.\n", number);
    }
    else
    {
        printf("%d — нечетное число.\n", number);
    }

    return 0;
}
