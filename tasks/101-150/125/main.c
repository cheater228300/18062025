/*
Условие задачи 125:
125. Считайте текстовый файл построчно и выведите его содержимое.
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
    while (fgets(line, sizeof(line), file) != NULL)
    {
        printf("%s", line);
    }

    fclose(file);
    return 0;
}
