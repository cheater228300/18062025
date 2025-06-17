/*
Условие задачи 230:
230. Напишите программу, которая выделяет память для структуры Person (поля: имя, возраст), заполняет её данными и выводит на экран.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char* name;
    int age;
} Person;

Person* create_person(const char* name, int age) {
    Person* person = (Person*)malloc(sizeof(Person));
    if (person == NULL) return NULL;
    
    person->name = (char*)malloc(strlen(name) + 1);
    if (person->name == NULL) {
        free(person);
        return NULL;
    }
    
    strcpy(person->name, name);
    person->age = age;
    
    return person;
}

void print_person(const Person* person) {
    printf("Person: %s, %d years old\n", person->name, person->age);
}

void free_person(Person* person) {
    free(person->name);
    free(person);
}

int main() {
    Person* p = create_person("Alice", 30);
    
    if (p != NULL) {
        print_person(p);
        free_person(p);
    } else {
        printf("Memory allocation failed!\n");
    }
    
    return 0;
}
