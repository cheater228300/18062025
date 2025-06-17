/*
Условие задачи 287:
287. Создайте функцию, которая проверяет, является ли слово палиндромом.
*/

#include <stdio.h>
#include <string.h>

int is_palindrome(const char *s) {
    int i = 0, j = strlen(s) - 1;
    while (i < j) {
        if (s[i] != s[j])
            return 0;
        i++; j--;
    }
    return 1;
}

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Удаление '\n'

    printf(is_palindrome(str) ? "Палиндром\n" : "Не палиндром\n");
    return 0;
}

