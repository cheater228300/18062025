/*
Условие задачи 027:
27. Выведите результат выражения (a + b) * c / d.
*/

#include <stdio.h>

int main() {
    int a = 5;
    int b = 3;
    int c = 4;
    int d = 2;

    int result = (a + b) * c / d;

    printf("Результат выражения (a + b) * c / d = %d\n", result);

    return 0;
}
