/*
Условие задачи 121:
121. Прочитайте содержимое файла и выведите на экран.
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
    while ((ch = fgetc(file)) != EOF)
    {
        putchar(ch);
    }

    fclose(file);
    return 0;
}
