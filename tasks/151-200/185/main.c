/*
Условие задачи 185:
185. Определите структуру Employee с полями: имя, должность, зарплата. Напишите функцию, которая выводит данные сотрудника.
*/

#include <stdio.h>

typedef struct {
    char name[50];
    char position[50];
    double salary;
} Employee;

void printEmployee(Employee emp) {
    printf("Имя: %s\n", emp.name);
    printf("Должность: %s\n", emp.position);
    printf("Зарплата: %.2f\n", emp.salary);
}

int main() {
    Employee e = {"Иван Иванов", "Программист", 75000.0};
    printEmployee(e);
    return 0;
}
