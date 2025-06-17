/*Условие задачи 237:
237. Напишите программу, которая создаёт массив структур Student (имя, оценка) с динамическим выделением памяти и выводит данные на экран.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char* name;
    int mark;
} Student;

Student* create_struct(const char* name, int mark) {
    Student* st= malloc(sizeof(Student));
    st->name=malloc(strlen(name)+1);
    strcpy(st->name,name);
    st->mark=mark;
    return st;
}

void print_struct(Student* st) {
    printf("Имя: %s\n", st->name);
    printf("Оценка: %d\n", st->mark);
}

void free_struct(Student* st) {
    free(st->name);
    free(st);
}

int main() {
    Student** arr = malloc(10 * sizeof(Student*)); // массив указателей на Student

    arr[0] = create_struct("Владимир", 5);
    arr[1] = create_struct("Вовка", 2);
    arr[2] = create_struct("Дональд", 3);

    for (int i = 0; i < 3; i++) {
        print_struct(arr[i]);
    }

    for (int i = 0; i < 3; i++) {
        free_struct(arr[i]);
    }
    free(arr);

    return 0;
}
