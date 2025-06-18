/*
Условие задачи 324:
324. Создайте функцию, которая проверяет, является ли число палиндромом без преобразования его в строку.
*/

#include <stdio.h>
#include <stdbool.h>

bool is_palindrome(int x) {
    if (x < 0) return false;

    int reversed = 0, original = x;
    while (x > 0) {
        reversed = reversed * 10 + x % 10;
        x /= 10;
    }
    return original == reversed;
}

int main() {
    int n = 12321;
    if (is_palindrome(n))
        printf("%d — палиндром\n", n);
    else
        printf("%d — не палиндром\n", n);
    return 0;
}
