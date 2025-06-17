/*
Условие задачи 122:
122. Считайте данные из файла и выведите количество символов.
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

    int count = 0;
    while (fgetc(file) != EOF)
    {
        count++;
    }

    printf("Количество символов: %d\n", count);
    fclose(file);
    return 0;
}
