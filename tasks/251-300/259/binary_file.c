#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main() {
    int numbers[SIZE] = {10, 20, 30, 40, 50};
    const char *filename = "data.bin";

    // Write to binary file
    FILE *file = fopen(filename, "wb");
    if (file == NULL) {
        perror("Error opening file for writing");
        return 1;
    }
    size_t written = fwrite(numbers, sizeof(int), SIZE, file);
    if (written != SIZE) {
        perror("Error writing to file");
        fclose(file);
        return 1;
    }
    fclose(file);

    // Read from binary file
    int buffer[SIZE];
    file = fopen(filename, "rb");
    if (file == NULL) {
        perror("Error opening file for reading");
        return 1;
    }
    size_t read = fread(buffer, sizeof(int), SIZE, file);
    if (read != SIZE) {
        perror("Error reading from file");
        fclose(file);
        return 1;
    }
    fclose(file);

    // Print contents
    printf("Read numbers: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", buffer[i]);
    }
    printf("\n");

    return 0;
}