/*
Условие задачи 129:
129. Сохраните структуру в файл и загрузите обратно.
*/

#include <stdio.h>

typedef struct
{
    int id;
    char name[20];
} Person;

int main()
{
    Person p = {1, "Alice"};
    FILE *file = fopen("person.dat", "wb");
    if (file == NULL)
    {
        printf("Ошибка открытия файла!\n");
        return 1;
    }

    fwrite(&p, sizeof(Person), 1, file); // Запись структуры
    fclose(file);

    // Чтение
    file = fopen("person.dat", "rb");
    Person readP;
    fread(&readP, sizeof(Person), 1, file);
    printf("ID: %d, Name: %s\n", readP.id, readP.name);

    fclose(file);
    return 0;
}
