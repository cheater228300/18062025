/*
Условие задачи 332:
332. Напишите программу, которая шифрует и дешифрует текст с помощью шифра Цезаря (сдвиг букв на N позиций).
*/

#include <stdio.h>
#include <ctype.h>

void caesar_cipher(char *text, int shift) {
    for (int i = 0; text[i] != '\0'; i++) {
        char c = text[i];
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            // Сдвигаем букву с учётом кругового перехода по алфавиту
            text[i] = (char)((((c - base) + shift + 26) % 26) + base);
        }
    }
}

int main() {
    char text[256];
    int shift;
    int choice;

    printf("Введите текст (максимум 255 символов):\n");
    fgets(text, sizeof(text), stdin);

    printf("Введите сдвиг (целое число): ");
    scanf("%d", &shift);

    printf("Выберите операцию:\n1 - Зашифровать\n2 - Расшифровать\nВаш выбор: ");
    scanf("%d", &choice);

    if (choice == 1) {
        caesar_cipher(text, shift);
        printf("Зашифрованный текст:\n%s\n", text);
    } else if (choice == 2) {
        caesar_cipher(text, -shift);
        printf("Расшифрованный текст:\n%s\n", text);
    } else {
        printf("Неверный выбор операции.\n");
    }

    return 0;
}

