#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE 256

int main() {
    FILE *file = fopen("input.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    char line[MAX_LINE];
    while (fgets(line, MAX_LINE, file) != NULL) {
        printf("%s", line);
    }

    fclose(file);
    return 0;
}