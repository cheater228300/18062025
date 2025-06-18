/*
Условие задачи 181:
181. Создайте структуру Point с полями x и y. Напишите функцию, вычисляющую расстояние между двумя точками.
*/

#include <stdio.h>
#include <math.h>

typedef struct {
    double x;
    double y;
} Point;

double distance(Point p1, Point p2) {
    double dx = p2.x - p1.x;
    double dy = p2.y - p1.y;
    return sqrt(dx * dx + dy * dy);
}

int main() {
    Point a = {1.0, 2.0};
    Point b = {4.0, 6.0};

    printf("Расстояние между точками: %.2f\n", distance(a, b));

    return 0;
}
