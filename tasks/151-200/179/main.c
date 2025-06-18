/*
Условие задачи 179:
179. Добавьте вложенные структуры в уже созданную структуру.
*/

#include <stdio.h>

struct Address {
    char city[50];
    char street[50];
    int houseNumber;
};

struct Student {
    char name[50];
    int age;
    float grade;
    struct Address address;  // вложенная структура
};

int main() {
    struct Student s = {
        "Алексей",
        20,
        8.5,
        {"Москва", "Ленина", 10}
    };

    printf("Студент: %s\n", s.name);
    printf("Возраст: %d\n", s.age);
    printf("Оценка: %.2f\n", s.grade);
    printf("Адрес: г. %s, ул. %s, дом %d\n",
           s.address.city, s.address.street, s.address.houseNumber);

    return 0;
}
