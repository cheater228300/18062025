/*
Условие задачи 190:
190. Напишите программу, которая создаёт массив структур Student и сортирует его по среднему баллу.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    float averageGrade;
} Student;

// Функция сравнения для qsort (по среднему баллу по убыванию)
int compareStudents(const void *a, const void *b) {
    const Student *s1 = (const Student *)a;
    const Student *s2 = (const Student *)b;
    if (s1->averageGrade < s2->averageGrade) return 1;
    if (s1->averageGrade > s2->averageGrade) return -1;
    return 0;
}

int main() {
    Student students[] = {
        {"Анна", 8.5},
        {"Иван", 9.2},
        {"Мария", 7.8},
        {"Дмитрий", 9.0}
    };
    int n = sizeof(students) / sizeof(students[0]);

    qsort(students, n, sizeof(Student), compareStudents);

    printf("Отсортированный список студентов по среднему баллу:\n");
    for (int i = 0; i < n; i++) {
        printf("%s: %.2f\n", students[i].name, students[i].averageGrade);
    }

    return 0;
}
