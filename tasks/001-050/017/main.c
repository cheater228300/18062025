/*
Условие задачи 017:
17. Напишите программу, в которой вы создаёте псевдоним типа int под названием MyInt с помощью typedef. Объявите переменную этого типа, присвойте ей значение и выведите его на экран.
*/

#include <stdio.h>

typedef int MyInt;  // Создаём псевдоним для int

int main() {
    MyInt number = 42;  // Используем псевдоним
    printf("Значение: %d\n", number);
    return 0;
}
