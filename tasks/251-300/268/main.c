/*
Условие задачи 268:
268. Напишите программу, которая копирует файл побайтово.
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Использование: %s <исходный_файл> <целевой_файл>\n", argv[0]);
        return 1;
    }

    FILE *src = fopen(argv[1], "rb");
    FILE *dest = fopen(argv[2], "wb");

    if (!src || !dest)
    {
        perror("Ошибка открытия файла");
        return 1;
    }

    char byte;
    while (fread(&byte, 1, 1, src))
    {
        fwrite(&byte, 1, 1, dest);
    }

    fclose(src);
    fclose(dest);
    printf("Файл скопирован!\n");
    return 0;
}
