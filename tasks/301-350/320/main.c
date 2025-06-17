// Задача 320 Напишите программу, которая шифрует и дешифрует текст с помощью шифра Цезаря (сдвиг букв на N позиций). 
#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Функция для шифрования текста
void caesar_encrypt(char *text, int shift) {
    for (int i = 0; text[i] != '\0'; i++) {
        if (isalpha(text[i])) {
            char base = islower(text[i]) ? 'a' : 'A';
            text[i] = (text[i] - base + shift) % 26 + base;
        }
    }
}

// Функция для дешифрования текста
void caesar_decrypt(char *text, int shift) {
    caesar_encrypt(text, 26 - (shift % 26)); // Дешифровка - это шифровка с обратным сдвигом
}

int main() {
    char text[1000];
    int shift, choice;

    printf("Выберите действие:\n");
    printf("1. Шифровать текст\n");
    printf("2. Дешифровать текст\n");
    printf("Ваш выбор: ");
    scanf("%d", &choice);

    printf("Введите текст: ");
    getchar(); // Очистка буфера после предыдущего ввода
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0'; // Удаление символа новой строки

    printf("Введите величину сдвига (число): ");
    scanf("%d", &shift);

    if (choice == 1) {
        caesar_encrypt(text, shift);
        printf("Зашифрованный текст: %s\n", text);
    } else if (choice == 2) {
        caesar_decrypt(text, shift);
        printf("Расшифрованный текст: %s\n", text);
    } else {
        printf("Неверный выбор.\n");
    }

    return 0;
}
