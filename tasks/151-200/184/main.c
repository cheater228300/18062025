/*
Условие задачи 184:
184. Реализуйте функцию, которая проверяет, пересекаются ли два прямоугольника.
*/

#include <stdio.h>
#include <stdbool.h>

typedef struct {
    double x;
    double y;
} Point;

typedef struct {
    Point topLeft;
    Point bottomRight;
} Rectangle;

// Функция проверяет, пересекаются ли два прямоугольника
bool isIntersect(Rectangle r1, Rectangle r2) {
    // Если один прямоугольник находится слева от другого
    if (r1.bottomRight.x < r2.topLeft.x || r2.bottomRight.x < r1.topLeft.x)
        return false;

    // Если один прямоугольник находится выше другого
    if (r1.topLeft.y < r2.bottomRight.y || r2.topLeft.y < r1.bottomRight.y)
        return false;

    return true; // Есть пересечение
}

int main() {
    Rectangle r1 = {{1, 5}, {4, 1}};
    Rectangle r2 = {{3, 6}, {6, 2}};
    Rectangle r3 = {{5, 4}, {7, 0}};

    printf("r1 и r2 пересекаются? %s\n", isIntersect(r1, r2) ? "Да" : "Нет");
    printf("r1 и r3 пересекаются? %s\n", isIntersect(r1, r3) ? "Да" : "Нет");

    return 0;
}
