/*
Условие задачи 195:
195. Напишите макрос PRINT_SIZE(type), который выводит размер указанного типа.
*/

#include <stdio.h>

#define PRINT_SIZE(type) printf("Size of " #type ": %zu\n", sizeof(type)) // #type превращает тип в строку

int main()
{
    PRINT_SIZE(int);    // Выведет размер int
    PRINT_SIZE(double); // Выведет размер double
    return 0;
}
