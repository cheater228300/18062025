/*
Условие задачи 081:
81. Напишите программу, которая принимает номер месяца (от 1 до 12) и выводит название этого месяца (например, 3 → "Март"). Используйте switch.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Использование: %s <номер_месяца_1-12>\n", argv[0]);
        return 1;
    }

    int month = atoi(argv[1]);
    switch (month) {
        case 1: 
            printf("Январь\n"); 
            break;
        case 2: 
            printf("Февраль\n"); 
            break;
        case 3: 
            printf("Март\n"); 
            break;
        case 4: 
            printf("Апрель\n"); 
            break;
        case 5: 
            printf("Май\n"); 
            break;
        case 6: 
            printf("Июнь\n"); 
            break;
        case 7: 
            printf("Июль\n"); 
            break;
        case 8: 
            printf("Август\n"); 
            break;
        case 9: 
            printf("Сентябрь\n"); 
            break;
        case 10: 
            printf("Октябрь\n"); 
            break;
        case 11: 
            printf("Ноябрь\n"); 
            break;
        case 12: 
            printf("Декабрь\n"); 
            break;
        default: 
            printf("Ошибка: введите число от 1 до 12.\n");
    }
    return 0;
}

// // Сканф
// #include <stdio.h>

// int main() {
//     int month;
//     printf("Введите номер месяца (1-12): ");
//     scanf("%d", &month);

//     switch (month) {
//         case 1: printf("Январь\n"); break;
//         case 2: printf("Февраль\n"); break;
//         case 3: printf("Март\n"); break;
//         case 4: printf("Апрель\n"); break;
//         case 5: printf("Май\n"); break;
//         case 6: printf("Июнь\n"); break;
//         case 7: printf("Июль\n"); break;
//         case 8: printf("Август\n"); break;
//         case 9: printf("Сентябрь\n"); break;
//         case 10: printf("Октябрь\n"); break;
//         case 11: printf("Ноябрь\n"); break;
//         case 12: printf("Декабрь\n"); break;
//         default: printf("Ошибка: введите число от 1 до 12.\n");
//     }
//     return 0;
// }
