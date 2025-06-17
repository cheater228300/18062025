#include <stdio.h>

int main() {
    char text[100];
    printf("Enter text to write to file: ");
    fgets(text, sizeof(text), stdin);
    
    FILE *file = fopen("output.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    fputs(text, file);
    fclose(file);
    
    printf("Text written to output.txt\n");
    return 0;
}