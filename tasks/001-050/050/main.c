/*
Условие задачи 050:
50. Реализуйте функцию, которая удаляет все гласные из строки.
*/

#include <stdio.h>
#include <ctype.h>

void remove_vowels(char *str) {
    int i = 0, j = 0;
    while (str[i] != '\0' && str[i] != '\n') {
        char c = tolower(str[i]);
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
            str[j] = str[i];
            j++;
        }
        i++;
    }
    str[j] = '\0';
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    remove_vowels(str);
    printf("String without vowels: %s\n", str);
    return 0;
}
