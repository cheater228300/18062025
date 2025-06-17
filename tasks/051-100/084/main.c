/*
Условие задачи 084:
84. Напишите программу, которая принимает день недели (число от 1 до 7) и выводит, является ли этот день рабочим или выходным. Используйте switch.
*/

#include <stdio.h>

int main() {
    int day;
    printf("Введите день недели (1-7): ");
    scanf("%d", &day);
    switch (day) {
        case 1: case 2: case 3: case 4: case 5:
            printf("Рабочий день.\n"); break;
        case 6: case 7:
            printf("Выходной.\n"); break;
        default:
            printf("Ошибка: введите число от 1 до 7.\n");
    }
    return 0;
}

/*#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Использование: %s <день_недели_1-7>\n", argv[0]);
        return 1;
    }

    int day = atoi(argv[1]);
    switch (day) {
        case 1: case 2: case 3: case 4: case 5:
            printf("Рабочий день.\n"); break;
        case 6: case 7:
            printf("Выходной.\n"); break;
        default:
            printf("Ошибка: введите число от 1 до 7.\n");
    }
    return 0;
}*/
