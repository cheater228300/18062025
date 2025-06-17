/*
Условие задачи 284:
284. Напишите функцию для поиска НОД двух чисел.
*/

#include <stdio.h>

// Функция для нахождения НОД двух чисел
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int x, y;
    printf("Введите два числа: ");
    scanf("%d %d", &x, &y);

    printf("НОД(%d, %d) = %d\n", x, y, gcd(x, y));

    return 0;
}
