/*
Условие задачи 069:
69. Реализуйте счётчик попыток входа в систему.
*/

#include <stdio.h>
#include <string.h>

int main() {
    const char correct_password[] = "secret123";
    const int max_attempts = 3;
    char input[50];
    int attempts = 0;
    int success = 0;

    while (attempts < max_attempts) {
        printf("Введите пароль: ");
        scanf("%49s", input);  // читаем строку, избегая переполнения

        if (strcmp(input, correct_password) == 0) {
            success = 1;
            break;  // пароль правильный — выход из цикла
        } else {
            attempts++;
            printf("Неверный пароль. Осталось попыток: %d\n", max_attempts - attempts);
        }
    }

    if (success) {
        printf("Вход выполнен успешно!\n");
    } else {
        printf("Доступ заблокирован. Превышено количество попыток.\n");
    }

    return 0;
}
