/*
Условие задачи 024:
24. С помощью директивы #define создайте макрос MAX_VALUE, равный 100. Объявите переменную и присвойте ей это значение. Выведите его на экран.
*/

#include <stdio.h>

#define MAX_VALUE 100

int main() {
    int value = MAX_VALUE;
    printf("MAX_VALUE = %d\n", value);
    return 0;
}
