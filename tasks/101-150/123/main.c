/*
Условие задачи 123:
123. Используйте функции fgetc() и feof() для обработки файла.
*/

#include <stdio.h>

int main()
{
    FILE *file = fopen("example.txt", "r");
    if (file == NULL)
    {
        printf("Ошибка открытия файла!\n");
        return 1;
    }

    char ch;
    while (!feof(file))
    { // Проверка на конец файла
        ch = fgetc(file);
        if (ch != EOF)
        {
            putchar(ch);
        }
    }

    fclose(file);
    return 0;
}
