/*
Условие задачи 228:
228. Реализуйте функцию, которая принимает строку, создаёт её копию в динамической памяти и возвращает указатель на эту копию.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* copy_string(const char* src) {
    if (src == NULL) return NULL;
    
    size_t len = strlen(src) + 1; // +1 для '\0'
    char* dest = (char*)malloc(len * sizeof(char));
    
    if (dest != NULL) {
        strcpy(dest, src);
    }
    
    return dest;
}

int main() {
    const char* original = "Hello, Dynamic Memory!";
    char* copy = copy_string(original);
    
    if (copy != NULL) {
        printf("Original: %s\n", original);
        printf("Copy:     %s\n", copy);
        free(copy);
    } else {
        printf("Memory allocation failed!\n");
    }
    
    return 0;
}
