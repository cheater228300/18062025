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