// Задача 312 Реализуйте программу, которая принимает строку как аргумент и 
//выводит её в обратном порядке. 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void print_reversed(const char *str) {
    int length = strlen(str);
    for (int i = length - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    putchar('\n');
}

int main(int argc, char *argv[]) {

    printf("Обратная строка: ");
    print_reversed(argv[1]);

    return 0;
}
