/*
Условие задачи 062:
62. Реализуйте проверку на возрастание трёх чисел.
*/

#include <stdio.h>

int is_strictly_increasing(int a, int b, int c) {
    return a < b && b < c;
}

int main() {
    int a, b, c;

    printf("Введите три числа через пробел: ");
    scanf("%d %d %d", &a, &b, &c);

    if (is_strictly_increasing(a, b, c)) {
        printf("Числа возрастают строго: %d < %d < %d\n", a, b, c);
    } else {
        printf("Числа НЕ возрастают строго\n");
    }

    return 0;
}
