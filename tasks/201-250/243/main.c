// Задача 243Напишите функцию, которая принимает две строки, объединяет их в 
//новую строку в динамической памяти и возвращает указатель на результат.
#include <stdio.h>

int main() {
    const char* str1 = "Hello, ";
    const char* str2 = "world!";

    char* combined = concatenate_strings(str1, str2);
    if (combined != NULL) {
        printf("Результат: %s\n", combined);
        free(combined); // Не забываем освободить память!
    } else {
        printf("Ошибка при объединении строк\n");
    }

    return 0;
}
char* concatenate_strings_alt(const char* str1, const char* str2) {
    if (!str1 || !str2) return NULL;
    
    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);
    char* result = malloc(len1 + len2 + 1);
    
    if (result) {
        memcpy(result, str1, len1);
        memcpy(result + len1, str2, len2 + 1); // Копируем с терминатором
    }
    
    return result;
}
