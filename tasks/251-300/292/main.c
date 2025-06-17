/*
Условие задачи 292:
292. Объявите глобальную и локальную переменную с одинаковым именем.
*/

#include <stdio.h>

int x = 10; // глобальная переменная

int get_global_x() {
    return x;
}

int main() {
    int x = 5; // локальная переменная

    printf("Локальная x = %d\n", x);
    printf("Глобальная x = %d\n", get_global_x());

    return 0;
}
