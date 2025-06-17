/*
Условие задачи 266:
266. Напишите функцию, которая добавляет новую запись в конец существующего файла.
*/

#include <stdio.h>

void append_to_file(const char *filename, const char *text)
{
    FILE *file = fopen(filename, "a"); // Режим 'a' = append
    if (!file)
    {
        perror("Ошибка открытия файла");
        return;
    }
    fprintf(file, "%s\n", text);
    fclose(file);
}

int main()
{
    append_to_file("log.txt", "Новая запись");
    printf("Запись добавлена!\n");
    return 0;
}
