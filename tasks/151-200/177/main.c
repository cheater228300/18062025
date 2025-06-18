/*
Условие задачи 177:
177. Напишите функцию, изменяющую поле структуры через указатель.
*/

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    float grade;
};

// Функция изменяет оценку студента через указатель на структуру
void updateGrade(struct Student *stu, float newGrade) {
    stu->grade = newGrade;
}

int main() {
    struct Student s = {"Алексей", 20, 8.5};

    printf("До изменения: %s, оценка = %.2f\n", s.name, s.grade);

    updateGrade(&s, 9.3);

    printf("После изменения: %s, оценка = %.2f\n", s.name, s.grade);

    return 0;
}
