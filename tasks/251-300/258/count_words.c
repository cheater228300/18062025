#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_LINE 256

int count_words(const char *line) {
    int count = 0;
    int in_word = 0;
    for (int i = 0; line[i] != '\0'; i++) {
        if (isspace(line[i])) {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            count++;
        }
    }
    return count;
}

int main() {
    FILE *file = fopen("input.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    char line[MAX_LINE];
    int total_words = 0;

    while (fgets(line, MAX_LINE, file) != NULL) {
        total_words += count_words(line);
    }

    fclose(file);
    printf("Total words: %d\n", total_words);
    return 0;
}