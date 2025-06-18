/*
Условие задачи 302:
302. Продемонстрируйте при помощи программы разницу между статическими и автоматическими переменными.
*/
#include <stdio.h>

void demoStatic() {
    static int staticVar = 0;   // Инициализируется один раз
    int autoVar = 0;            // Инициализируется при каждом вызове

    staticVar++;
    autoVar++;

    printf("staticVar = %d, autoVar = %d\n", staticVar, autoVar);
}

int main() {
    printf("Первый вызов функции:\n");
    demoStatic();

    printf("Второй вызов функции:\n");
    demoStatic();

    printf("Третий вызов функции:\n");
    demoStatic();

    return 0;
}
