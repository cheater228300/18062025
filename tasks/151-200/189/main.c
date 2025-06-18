/*
Условие задачи 189:
189. Напишите функцию, которая сравнивает две структуры Person по имени и возрасту.
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct {
    char name[50];
    int age;
} Person;

// Функция сравнения двух Person по имени и возрасту
bool comparePersons(Person p1, Person p2) {
    return (strcmp(p1.name, p2.name) == 0) && (p1.age == p2.age);
}

int main() {
    Person person1 = {"Иван", 25};
    Person person2 = {"Иван", 25};
    Person person3 = {"Анна", 30};

    printf("person1 и person2 %s\n", comparePersons(person1, person2) ? "совпадают" : "не совпадают");
    printf("person1 и person3 %s\n", comparePersons(person1, person3) ? "совпадают" : "не совпадают");

    return 0;
}
