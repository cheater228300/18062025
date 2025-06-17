/*
Условие задачи 200:
200. Используйте строкификацию #x в макросе для вывода имени переменной.
*/

#include <stdio.h>

#define PRINT_VAR(x) printf(#x " = %d\n", x) // #x превращает имя переменной в строку

int main()
{
    int count = 100;
    PRINT_VAR(count); // Выведет "count = 100"
    return 0;
}
