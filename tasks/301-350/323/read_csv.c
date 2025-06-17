#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE 256
#define MAX_FIELDS 10
#define MAX_FIELD_LEN 50

void print_table(char fields[MAX_FIELDS][MAX_FIELD_LEN], int field_count, int* max_widths) {
    for (int i = 0; i < field_count; i++) {
        printf("%-*s", max_widths[i], fields[i]);
        if (i < field_count - 1) printf(" | ");
    }
    printf("\n");
}

int main() {
    FILE* file = fopen("data.csv", "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    char line[MAX_LINE];
    char fields[MAX_FIELDS][MAX_FIELD_LEN];
    int max_widths[MAX_FIELDS] = {0};
    int row_count = 0;

    // Read and parse CSV
    while (fgets(line, MAX_LINE, file)) {
        // Remove trailing newline
        line[strcspn(line, "\n")] = '\0';

        // Parse fields
        int field_count = 0;
        char* token = strtok(line, ",");
        while (token && field_count < MAX_FIELDS) {
            strncpy(fields[field_count], token, MAX_FIELD_LEN - 1);
            fields[field_count][MAX_FIELD_LEN - 1] = '\0';
            int len = strlen(fields[field_count]);
            if (len > max_widths[field_count]) max_widths[field_count] = len + 2;
            field_count++;
            token = strtok(NULL, ",");
        }

        // Print row
        print_table(fields, field_count, max_widths);
        row_count++;
    }

    fclose(file);
    return 0;
}