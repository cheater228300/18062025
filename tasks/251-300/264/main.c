/*
Условие задачи 264:
264. Реализуйте простой редактор записей (например, список контактов), сохраняющий данные в файл.
*/

#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[50];
    char phone[20];
} Contact;

void add_contact(FILE *file)
{
    Contact c;
    printf("Введите имя: ");
    scanf("%s", c.name);
    printf("Введите телефон: ");
    scanf("%s", c.phone);
    fprintf(file, "%s %s\n", c.name, c.phone);
}

int main()
{
    FILE *file = fopen("contacts.txt", "a+");
    if (!file)
    {
        perror("Ошибка открытия файла");
        return 1;
    }

    add_contact(file);
    fclose(file);
    printf("Контакт сохранён!\n");
    return 0;
}
