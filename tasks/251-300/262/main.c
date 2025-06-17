/*
Условие задачи 262:
262. Проверьте, существует ли файл, перед его открытием.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    const char *filename = "example.txt";
    FILE *file = fopen(filename, "r");

    if (file == NULL)
    {
        perror("Ошибка открытия файла");
        printf("Файл '%s' не существует!\n", filename);
        return 1;
    }

    printf("Файл '%s' успешно открыт!\n", filename);
    fclose(file);
    return 0;
}
