/*
Условие задачи 041:
41. Выведите ASCII-код символа.
*/

#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    ch = getchar();
    printf("ASCII code of %c is %d\n", ch, ch);
    return 0;
}
