/*
Условие задачи 293:
293. Продемонстрируйте область действия переменной внутри блока {}.
*/

#include <stdio.h>

int main() {
    int x = 10;  // переменная в основной области видимости main

    printf("Вне блока: x = %d\n", x);

    {
        int x = 5;  // новая переменная x, область видимости — только внутри этого блока
        printf("Внутри блока: x = %d\n", x);
    }

    // Здесь снова используется первая переменная x
    printf("Снова вне блока: x = %d\n", x);

    return 0;
}
