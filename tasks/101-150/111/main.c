/*
Условие задачи 111:
111. Напишите программу, которая запрашивает у пользователя пароль и продолжает запрашивать его, пока введённое значение не совпадёт с правильным.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char correct_password[] = "secret123";
    char input[100];
    
    do {
        printf("Enter password: ");
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = '\0';
    } while (strcmp(input, correct_password) != 0);
    
    printf("Password correct!\n");
    return 0;
}
