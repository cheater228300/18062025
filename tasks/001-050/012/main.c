/*
Условие задачи 012:
12. Используйте модификатор extern для глобальной переменной.
*/
#include <stdio.h>

extern int global_var; // Объявление внешней переменной
int global_var = 42;  // Определение глобальной переменной

int main() {
    printf("Глобальная переменная: %d\n", global_var);
    return 0;
}
