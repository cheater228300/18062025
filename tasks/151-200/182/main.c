/*
Условие задачи 182:
182. Добавьте в структуру Point функцию или процедуру, который выводит координаты на экран.
*/

#include <stdio.h>

typedef struct {
    double x;
    double y;
} Point;

// Функция для вывода координат точки
void printPoint(Point *p) {
    printf("Координаты точки: (%.2f, %.2f)\n", p->x, p->y);
}

int main() {
    Point a = {3.5, 7.2};
    printPoint(&a);
    return 0;
}
