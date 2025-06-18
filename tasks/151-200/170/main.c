/*
Условие задачи 170:
170. Выведите значение переменной и её адрес с помощью указателя.
*/

#include <stdio.h>

int main() {
    int var = 42;
    int *ptr = &var;

    printf("Значение переменной var: %d\n", var);
    printf("Адрес переменной var: %p\n", (void*)ptr);
    printf("Значение через указатель: %d\n", *ptr);

    return 0;
}
