/*
Условие задачи 082:
82. Создайте программу, которая определяет, является ли введённый год високосным. Для этого: Год делится на 4 → високосный, но если он делится на 100, но не делится на 400 → не високосный.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Использование: %s <год>\n", argv[0]);
        return 1;
    }

    int year = atoi(argv[1]);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d — високосный год.\n", year);
    } else {
        printf("%d — не високосный год.\n", year);
    }
    return 0;
}

// Сканф
// #include <stdio.h>

// int main() {
//     int year;
//     printf("Введите год: ");
//     scanf("%d", &year);

//     if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//         printf("%d — високосный год.\n", year);
//     } else {
//         printf("%d — не високосный год.\n", year);
//     }
//     return 0;
// }
