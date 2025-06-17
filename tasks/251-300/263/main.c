/*
Условие задачи 263:
263. Напишите программу, которая объединяет несколько текстовых файлов в один.
*/

#include <stdio.h>

int main()
{
    FILE *output = fopen("combined.txt", "w");
    if (!output)
    {
        perror("Ошибка создания файла");
        return 1;
    }

    const char *files[] = {"file1.txt", "file2.txt"};
    for (int i = 0; i < 2; i++)
    {
        FILE *input = fopen(files[i], "r");
        if (!input)
        {
            perror("Ошибка открытия файла");
            continue;
        }

        char ch;
        while ((ch = fgetc(input)) != EOF)
        {
            fputc(ch, output);
        }
        fclose(input);
    }

    fclose(output);
    printf("Файлы объединены в 'combined.txt'\n");
    return 0;
}
