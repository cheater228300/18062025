/*
Условие задачи 166:
166. Напишите программу, которая проверяет, является ли массив палиндромом.
*/

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int is_palindrome = 1; // предположим, что палиндром

    for (int i = 0; i < size / 2; i++) {
        if (arr[i] != arr[size - 1 - i]) {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome) {
        printf("Массив является палиндромом.\n");
    } else {
        printf("Массив не является палиндромом.\n");
    }

    return 0;
}
