/*
Условие задачи 048:
48. Напишите собственную реализацию функции strlen().
*/

#include <stdio.h>

int my_strlen(const char *str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    int len = my_strlen(str);
    if (str[len - 1] == '\n') {
        len--;
    }
    
    printf("Length of string: %d\n", len);
    return 0;
}
