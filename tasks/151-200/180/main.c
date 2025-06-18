/*
Условие задачи 180:
180. Используйте typedef для структур.
*/

#include <stdio.h>

typedef struct {
    char name[50];
    int age;
    float grade;
} Student;

int main() {
    Student s = {"Мария", 21, 9.1};

    printf("Имя: %s\n", s.name);
    printf("Возраст: %d\n", s.age);
    printf("Оценка: %.2f\n", s.grade);

    return 0;
}
