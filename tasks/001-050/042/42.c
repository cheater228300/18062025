#include <stdio.h>

int main() {
    char ch1, ch2;
    printf("Enter first character: ");
    ch1 = getchar();
    getchar(); // Clear newline
    printf("Enter second character: ");
    ch2 = getchar();
    if (ch1 == ch2) {
        printf("Characters %c and %c are equal\n", ch1, ch2);
    } else if (ch1 < ch2) {
        printf("Character %c comes before %c\n", ch1, ch2);
    } else {
        printf("Character %c comes after %c\n", ch1, ch2);
    }
    return 0;
}