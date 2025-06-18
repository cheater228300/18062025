/*
Условие задачи 289:
289. Напишите функцию, возвращающую количество гласных в строке.
*/

#include <stdio.h>
#include <ctype.h>

int countVowels(const char *str) {
    int count = 0;
    char c;
    while ((c = *str++) != '\0') {
        c = tolower((unsigned char)c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'а' || c == 'е' || c == 'ё' || c == 'и' || c == 'о' || c == 'у' || c == 'ы' || c == 'э' || c == 'ю' || c == 'я') {
            count++;
        }
    }
    return count;
}

int main() {
    const char *text = "Пример текста с гласными vowels";

    int vowelsCount = countVowels(text);
    printf("Количество гласных: %d\n", vowelsCount);

    return 0;
}
