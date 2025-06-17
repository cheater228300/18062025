#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    double average_grade;
};

int compare_students(const void *a, const void *b) {
    struct Student *s1 = (struct Student *)a;
    struct Student *s2 = (struct Student *)b;
    if (s1->average_grade < s2->average_grade) return 1;
    if (s1->average_grade > s2->average_grade) return -1;
    return 0;
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    getchar();
    
    struct Student *students = (struct Student *)malloc(n * sizeof(struct Student));
    if (students == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    for (int i = 0; i < n; i++) {
        printf("Enter name for student %d: ", i + 1);
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';
        printf("Enter average grade: ");
        scanf("%lf", &students[i].average_grade);
        getchar();
    }
    
    qsort(students, n, sizeof(struct Student), compare_students);
    
    printf("\nSorted students by average grade:\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s, Average grade: %.2f\n", 
               students[i].name, students[i].average_grade);
    }
    
    free(students);
    return 0;
}