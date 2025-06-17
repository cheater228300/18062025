/*
Условие задачи 192:
192. Реализуйте безопасный макрос SWAP(a, b, type) для обмена значений.
*/
// gcc main.c -o swap_example && ./swap_example
#include <stdio.h>

#define SWAP(a, b, type) \
    {                    \
        type temp = a;   \
        a = b;           \
        b = temp;        \
    } // Обмен через временную переменную

int main()
{
    int x = 5, y = 10;
    SWAP(x, y, int); // После обмена x=10, y=5
    printf("x=%d, y=%d\n", x, y);
    return 0;
}
