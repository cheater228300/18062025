/*
Условие задачи 033:
33. Реализуйте проверку равенства двух чисел с погрешностью.
*/

#include <stdio.h>

int are_equal(double a, double b, double epsilon) {
    double diff = a - b;
    if (diff < 0) diff = -diff; // abs без math.h
    return diff < epsilon;
}

int main() {
    double x = 0.1 * 3;
    double y = 0.3;
    double epsilon = 0.000001;

    if (are_equal(x, y, epsilon)) {
        printf("Равны\n");
    } else {
        printf("Не равны\n");
    }

    return 0;
}


