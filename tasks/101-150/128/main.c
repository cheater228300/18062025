/*
Условие задачи 128:
128. Обработайте двоичный файл с помощью fread() и fwrite().
*/

#include <stdio.h>

int main()
{
    int data[] = {1, 2, 3, 4, 5};
    FILE *file = fopen("binary.bin", "wb");
    if (file == NULL)
    {
        printf("Ошибка открытия файла!\n");
        return 1;
    }

    fwrite(data, sizeof(int), 5, file); // Запись массива
    fclose(file);

    // Чтение
    file = fopen("binary.bin", "rb");
    int readData[5];
    fread(readData, sizeof(int), 5, file);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", readData[i]);
    }

    fclose(file);
    return 0;
}
