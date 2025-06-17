#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    int words = 0;
    int in_word = 0;
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (isspace(str[i])) {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            words++;
        }
    }
    
    printf("Number of words: %d\n", words);
    return 0;
}