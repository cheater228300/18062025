/*
Условие задачи 265:
265. Создайте программу, которая читает двоичный файл и выводит его содержимое в шестнадцатеричном виде.
*/

#include <stdio.h>

int main()
{
    FILE *file = fopen("data.bin", "rb");
    if (!file)
    {
        perror("Ошибка открытия файла");
        return 1;
    }

    unsigned char byte;
    while (fread(&byte, 1, 1, file))
    {
        printf("%02X ", byte); // Вывод в HEX
    }

    fclose(file);
    return 0;
}
