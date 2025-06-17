/*
Условие задачи 194:
194. Определите макрос, который выводит отладочную информацию только при определённом флаге.
*/

#include <stdio.h>

#define DEBUG 1 // Флаг отладки (1 = включено)

#if DEBUG
#define DEBUG_PRINT(...) printf("DEBUG: " __VA_ARGS__) // Вывод, если DEBUG=1
#else
#define DEBUG_PRINT(...) // Пустой макрос, если DEBUG=0
#endif

int main()
{
    int x = 42;
    DEBUG_PRINT("x = %d\n", x); // Выведет "DEBUG: x = 42"
    return 0;
}
