/*
Условие задачи 064:
64. Реализуйте бесконечный цикл с выходом по условию.
*/

#include <stdio.h>

int main() {
    int number;

    while (1) {  // бесконечный цикл
        printf("Введите число (0 для выхода): ");
        scanf("%d", &number);

        if (number == 0) {
            break;  // выход из цикла
        }

        printf("Вы ввели: %d\n", number);
    }

    printf("Цикл завершён.\n");
    return 0;
}
