/*
Условие задачи 126:
126. Напишите программу, которая считает количество слов в файле.
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *file = fopen("example.txt", "r");
    if (file == NULL)
    {
        printf("Ошибка открытия файла!\n");
        return 1;
    }

    int wordCount = 0;
    char ch, prev = ' ';
    while ((ch = fgetc(file)) != EOF)
    {
        if (isspace(prev) && !isspace(ch))
        {
            wordCount++;
        }
        prev = ch;
    }

    printf("Количество слов: %d\n", wordCount);
    fclose(file);
    return 0;
}
