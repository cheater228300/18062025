/*
Условие задачи 032:
32. Сравните точность float и double.
*/

#include <stdio.h>

int main() {
    float f = 1.0f / 3.0f;
    double d = 1.0 / 3.0;

    printf("float:  %.10f\n", f);
    printf("double: %.15lf\n", d);

    return 0;
}

