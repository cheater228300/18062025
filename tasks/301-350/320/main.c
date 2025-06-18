// Задача 320 Напишите программу, которая шифрует и дешифрует текст с помощью шифра Цезаря (сдвиг букв на N позиций). 
#include <stdio.h>

void caesar(char *text, int shift) {
    for (int i = 0; text[i]; i++) {
        char c = text[i];
        if (c >= 'a' && c <= 'z')
            text[i] = 'a' + (c - 'a' + shift + 26) % 26;
        else if (c >= 'A' && c <= 'Z')
            text[i] = 'A' + (c - 'A' + shift + 26) % 26;
    }
}

int main() {
    char text[] = "Hello, World!";
    int shift = 3;

    caesar(text, shift);
    printf("Зашифровано: %s\n", text);

    caesar(text, -shift);
    printf("Расшифровано: %s\n", text);

    return 0;
}
