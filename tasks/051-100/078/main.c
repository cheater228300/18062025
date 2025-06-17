/*
Условие задачи 078:
78. Напишите программу, которая определяет, является ли введённый символ буквой, цифрой или специальным символом. Используйте условные конструкции if-else.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    char a;
    scanf("%c",&a);
    
    if (!isdigit(a)==0)
        printf("Цифра");
    else if (!isalpha(a)==0)
        printf("Буква");
    else if (!ispunct(a)==0)
        printf("Символ");

    printf("\n");
    return 0;
}
