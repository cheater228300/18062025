#include <stdio.h>

int main() {
    int ch;
    printf("Enter characters (Ctrl+D or Ctrl+Z to stop):\n");
    while ((ch = getchar()) != EOF) {
        putchar(ch);
    }
    return 0;
}