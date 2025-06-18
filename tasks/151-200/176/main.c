/*
Условие задачи 176:
176. Инициализируйте массив структур Student(с полями имя, возраст, оценка.) и выведите данные.
*/

#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float grade;
};

int main() {
    struct Student students[] = {
        {"Алексей", 20, 8.5},
        {"Мария", 22, 9.0},
        {"Иван", 19, 7.8}
    };

    int size = sizeof(students) / sizeof(students[0]);

    for (int i = 0; i < size; i++) {
        printf("Студент %d:\n", i + 1);
        printf("  Имя: %s\n", students[i].name);
        printf("  Возраст: %d\n", students[i].age);
        printf("  Оценка: %.2f\n\n", students[i].grade);
    }

    return 0;
}

