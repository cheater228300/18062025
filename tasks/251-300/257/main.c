/*
Условие задачи 257:
257. Считайте текстовый файл построчно и выведите его содержимое.
*/

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
