/*
Условие задачи 061:
61. Проверьте, находится ли точка внутри окружности.
*/

#include <stdio.h>
#include <math.h>  // для pow, если используешь, но тут не нужно

int is_inside_circle(double x, double y, double cx, double cy, double r) {
    double dx = x - cx;
    double dy = y - cy;
    return (dx * dx + dy * dy) < (r * r);
}

int main() {
    double x, y;
    double cx = 0.0, cy = 0.0, r = 5.0;

    printf("Введите координаты точки (x y): ");
    scanf("%lf %lf", &x, &y);

    if (is_inside_circle(x, y, cx, cy, r)) {
        printf("Точка внутри окружности\n");
    } else {
        printf("Точка вне окружности или на границе\n");
    }

    return 0;
}

