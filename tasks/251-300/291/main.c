/*
Условие задачи 291:
291. Напишите функцию, объединяющую две строки.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* concat_strings(const char* str1, const char* str2) {
    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);
    char* result = (char*)malloc(len1 + len2 + 1); // +1 для '\0'
    
    if (result != NULL) {
        strcpy(result, str1);
        strcat(result, str2);
    }
    
    return result;
}

int main() {
    const char* s1 = "Hello, ";
    const char* s2 = "World!";
    char* combined = concat_strings(s1, s2);
    
    if (combined != NULL) {
        printf("Combined string: %s\n", combined);
        free(combined);
    }
    
    return 0;
}
