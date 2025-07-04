/*
Условие задачи 029:
29. Напишите программу, использующую побитовый сдвиг как замену умножению.
*/

#include <stdio.h>

int main() {
    int x = 7;
    int n = 3; // множитель — 2^3 = 8

    // Умножение x на 8 с помощью сдвига влево на 3 бита
    int result = x << n;

    printf("%d умножить на %d (2 в степени %d) равно %d\n", x, 1 << n, n, result);

    return 0;
}
