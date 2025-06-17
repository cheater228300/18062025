/*
Условие задачи 127:
127. Реализуйте форматированный ввод-вывод с использованием fscanf() и fprintf().
*/

#include <stdio.h>
int main()
{
    FILE *file = fopen("data.txt", "w+");
    if (file == NULL)
    {
        printf("Ошибка открытия файла!\n");
        return 1;
    }

    fprintf(file, "%d %s\n", 42, "Hello"); // Запись
    rewind(file);                          // Перемотка в начало

    int num;
    char str[20];
    fscanf(file, "%d %s", &num, str); // Чтение
    printf("Прочитано: %d %s\n", num, str);

    fclose(file);
    return 0;
}
