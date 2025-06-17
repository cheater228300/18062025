/*
Условие задачи 130:
130. Напишите программу, которая считывает содержимое текстового файла и выводит его на экран построчно.
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

    char line[256];
    int lineNum = 1;
    while (fgets(line, sizeof(line), file) != NULL)
    {
        printf("%d: %s", lineNum++, line);
    }

    fclose(file);
    return 0;
}
