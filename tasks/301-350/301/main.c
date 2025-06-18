/*
Условие задачи 301:
301. Напишите программу, показывающую, как static влияет на переменную в цикле.
*/

#include <stdio.h>

void staticInLoop() {
    for (int i = 0; i < 5; i++) {
        static int count = 0;  // Инициализируется только один раз
        count++;
        printf("Итерация %d: count = %d\n", i, count);
    }
}

int main() {
    staticInLoop();
    return 0;
}
