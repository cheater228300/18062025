/*
Условие задачи 197:
197. Напишите макрос SWAP_T(T, a, b), безопасно меняющий значения переменных любого типа.
*/

#include <stdio.h>

#define SWAP_T(T, a, b) \
    {                   \
        T temp = a;     \
        a = b;          \
        b = temp;       \
    } // Обмен для любого типа

int main()
{
    const char *s1 = "Hello", *s2 = "World";
    printf("Before: s1=%s, s2=%s\n", s1, s2);
    SWAP_T(const char *, s1, s2); // Меняем указатели местами
    printf("After: s1=%s, s2=%s\n", s1, s2);
    return 0;
}
