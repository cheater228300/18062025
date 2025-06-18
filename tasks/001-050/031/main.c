/*
Условие задачи 031:
31. Вычислите площадь круга с радиусом 5 (тип float).
*/

#include <stdio.h>

int main() {
    float radius = 5.0f;
    float pi = 3.14159265f;
    float area = pi * radius * radius;

    printf("Площадь круга с радиусом %.2f равна %.4f\n", radius, area);

    return 0;
}

