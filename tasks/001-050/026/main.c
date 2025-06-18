/*
Условие задачи 026:
26. Напишите функцию, в которой объявите несколько переменных без явного указания типа, используя auto. Убедитесь, что код компилируется с флагом -std=c11.
*/

#include <stdio.h>

void example() {
    auto int a = 10;     // auto можно явно указать, но это избыточно
    auto float b = 3.14; 
    auto char c = 'x';

    printf("a = %d, b = %.2f, c = %c\n", a, b, c);
}

int main() {
    example();
    return 0;
}
