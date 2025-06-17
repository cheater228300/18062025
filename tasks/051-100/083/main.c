/*
Условие задачи 083:
83. Напишите программу, которая определяет, равны ли три введённых числа. Выведите "Все равны", "Два равны" или "Все разные", используя if-else.
*/

#include <stdio.h>
#include <stdlib.h>

// int main(int argc, char *argv[]) {
//     if (argc != 4) {
//         printf("Использование: %s <число1> <число2> <число3>\n", argv[0]);
//         return 1;
//     }

//     int a = atoi(argv[1]), b = atoi(argv[2]), c = atoi(argv[3]);
//     if (a == b && b == c) {
//         printf("Все равны.\n");
//     } else if (a == b || a ==c || b == c) {
//         printf("Два равны.\n");
//     } else {
//         printf("Все разные.\n");
//     }
//     return 0;
// }

// Сканф
#include <stdio.h>

int main() {
    int a, b, c;
    printf("Введите три числа через пробел: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c) {
        printf("Все равны.\n");
    } else if (a == b || a==c || b == c) {
        printf("Два равны.\n");
    } else {
        printf("Все разные.\n");
    }
    return 0;
}
