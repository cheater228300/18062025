#include <stdio.h>

void replace_spaces(char *str) {
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] == ' ') {
            str[i] = '!';
        }
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    replace_spaces(str);
    printf("String with spaces replaced: %s", str);
    return 0;
}