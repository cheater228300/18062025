#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_LEN 50

typedef struct {
    int id;
    char name[NAME_LEN];
    double value;
} Record;

int main() {
    Record original = {1, "Sample Record", 99.99};
    const char *filename = "record.bin";

    // Write structure to file
    FILE *file = fopen(filename, "wb");
    if (file == NULL) {
        perror("Error opening file for writing");
        return 1;
    }
    size_t written = fwrite(&original, sizeof(Record), 1, file);
    if (written != 1) {
        perror("Error writing to file");
        fclose(file);
        return 1;
    }
    fclose(file);

    // Read structure from file
    Record loaded;
    file = fopen(filename, "rb");
    if (file == NULL) {
        perror("Error opening file for reading");
        return 1;
    }
    size_t read = fread(&loaded, sizeof(Record), 1, file);
    if (read != 1) {
        perror("Error reading from file");
        fclose(file);
        return 1;
    }
    fclose(file);

    // Print loaded structure
    printf("Loaded Record: ID=%d, Name=%s, Value=%.2f\n", loaded.id, loaded.name, loaded.value);

    return 0;
}