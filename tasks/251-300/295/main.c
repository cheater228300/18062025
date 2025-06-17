/*
Условие задачи 295:
295. Приведите пример статической (static) переменной внутри функции.
*/

#include <stdio.h>

void counter() {
    static int count = 0;  // статическая переменная, сохраняет значение между вызовами
    count++;
    printf("Вызов номер: %d\n", count);
}

int main() {
    counter(); // Вызов номер: 1
    counter(); // Вызов номер: 2
    counter(); // Вызов номер: 3
    return 0;
}
