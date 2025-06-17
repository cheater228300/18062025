#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* get_unique_values(const int* arr, int size, int* unique_size) {
    if (size <= 0 || arr == NULL || unique_size == NULL) {
        *unique_size = 0;
        return NULL;
    }

    // Find min and max to allocate a boolean array
    int min = arr[0], max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    // Allocate boolean array to track seen values
    size_t range = (size_t)(max - min + 1);
    char* seen = (char*)calloc(range, sizeof(char));
    if (seen == NULL) {
        *unique_size = 0;
        return NULL;
    }

    // Count unique values
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (!seen[arr[i] - min]) {
            seen[arr[i] - min] = 1;
            count++;
        }
    }

    // Allocate result array
    int* unique = (int*)malloc(count * sizeof(int));
    if (unique == NULL) {
        free(seen);
        *unique_size = 0;
        return NULL;
    }

    // Fill unique array
    int index = 0;
    for (int i = 0; i < size; i++) {
        if (seen[arr[i] - min]) {
            unique[index++] = arr[i];
            seen[arr[i] - min] = 0; // Mark as processed
        }
    }

    free(seen);
    *unique_size = count;
    return unique;
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int unique_size;

    int* unique = get_unique_values(arr, size, &unique_size);
    if (unique == NULL) {
        printf("Error allocating memory\n");
        return 1;
    }

    printf("Unique values: ");
    for (int i = 0; i < unique_size; i++) {
        printf("%d ", unique[i]);
    }
    printf("\n");

    free(unique);
    return 0;
}