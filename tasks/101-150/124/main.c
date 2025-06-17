/*
Условие задачи 124:
124. Реализуйте копирование одного файла в другой.
*/

#include <stdio.h>

int main()
{
    FILE *source = fopen("source.txt", "r");
    FILE *dest = fopen("dest.txt", "w");
    if (source == NULL || dest == NULL)
    {
        printf("Ошибка открытия файла!\n");
        return 1;
    }

    char ch;
    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch, dest);
    }

    fclose(source);
    fclose(dest);
    printf("Файл скопирован!\n");
    return 0;
}
