/*
Условие задачи 322:
322. Реализуйте макрос, который проверяет, находится ли заданное значение внутри заданного диапазона [min; max].
*/

#include <stdio.h>

#define IN_RANGE(x, min, max) ((x) >= (min) && (x) <= (max))

int main() {
    int val = 5;
    if (IN_RANGE(val, 1, 10))
        printf("%d в диапазоне [1;10]\n", val);
    else
        printf("%d вне диапазона\n", val);
    return 0;
}
