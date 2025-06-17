/*
Условие задачи 070:
70. Нарисуйте прямоугольник из звёздочек с помощью циклов.
*/

#include <stdio.h>

int main() {
    int width, height;

    printf("Введите ширину прямоугольника: ");
    scanf("%d", &width);
    printf("Введите высоту прямоугольника: ");
    scanf("%d", &height);

    for (int i = 0; i < height; i++) {         // строки
        for (int j = 0; j < width; j++) {      // столбцы
            printf("*");
        }
        printf("\n");  // переход на новую строку после каждого ряда
    }

    return 0;
}

