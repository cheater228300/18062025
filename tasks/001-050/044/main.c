/*
Условие задачи 044:
44. Используйте getchar() и putchar() для обработки потока.
*/

#include <stdio.h>

int main() {
    int ch;
    printf("Введите текст (Ctrl+D для окончания ввода):\n");
    while ((ch = getchar()) != EOF) {
        putchar(ch);  // выводим символ обратно
    }
    return 0;
}
