/*
Условие задачи 330:
330. Создайте функцию, которая возвращает указатель на строку, представляющую число в произвольной системе счисления (основание от 2 до 16).
*/

#include <stdio.h>
#include <stdlib.h>

char* itoa_base(int value, int base) {
    if (base < 2 || base > 16) return NULL;

    static char digits[] = "0123456789ABCDEF";
    char buffer[65]; // достаточно для 64-битных чисел + '\0'
    int index = 64;
    buffer[index] = '\0';

    unsigned int val = (base == 10 && value < 0) ? -value : (unsigned int)value;

    do {
        buffer[--index] = digits[val % base];
        val /= base;
    } while (val > 0);

    if (value < 0 && base == 10)
        buffer[--index] = '-';

    // Выделим память для результата и скопируем строку
    char* result = malloc(65 - index);
    if (result)
        for (int i = 0; buffer[index]; i++, index++)
            result[i] = buffer[index];
    return result;
}

//Пример использования
int main() {
    int number = -255;
    int base = 16;

    char* str = itoa_base(number, base);
    if (str) {
        printf("Число %d в системе %d: %s\n", number, base, str);
        free(str);
    }

    return 0;
}
