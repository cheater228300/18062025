/*
Условие задачи 022:
22. Объявите переменные типов float, double, int. Присвойте переменной int результат сложения двух чисел типа float. Объясните, какое преобразование произошло.
*/

#include <stdio.h>

int main() {
    float a = 3.5f;
    float b = 2.7f;
    double c = 5.1;
    
    // Сложение двух float
    float sum = a + b;
    
    // Присваивание результата сложения float переменной int
    int result = sum;

    printf("a = %f, b = %f\n", a, b);
    printf("sum (float) = %f\n", sum);
    printf("result (int) = %d\n", result);

    return 0;
}
