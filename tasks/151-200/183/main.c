/*
Условие задачи 183:
183. Определите структуру Rectangle, содержащую две точки (левый верхний и правый нижний угол). Реализуйте функцию, вычисляющую площадь прямоугольника.
*/

#include <stdio.h>
#include <stdlib.h>  // Для abs()

typedef struct {
    double x;
    double y;
} Point;

typedef struct {
    Point topLeft;
    Point bottomRight;
} Rectangle;

// Функция вычисляет площадь прямоугольника
double area(Rectangle rect) {
    double width = fabs(rect.bottomRight.x - rect.topLeft.x);
    double height = fabs(rect.topLeft.y - rect.bottomRight.y);
    return width * height;
}

int main() {
    Rectangle rect = {{1.0, 5.0}, {4.0, 1.0}};

    printf("Площадь прямоугольника: %.2f\n", area(rect));

    return 0;
}
