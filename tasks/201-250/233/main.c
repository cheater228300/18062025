/*
Условие задачи 233:
233. Напишите программу, которая загружает текстовый файл в динамический массив строк и выводит его содержимое на экран.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LEN 256

int main() {
    FILE *file = fopen("input.txt", "r");  
    
    char **lines = NULL;  
    int count = 0;       
    char buffer[MAX_LINE_LEN];

    while (fgets(buffer, MAX_LINE_LEN, file)) {
        buffer[strcspn(buffer, "\n")] = '\0';
        char **tmp = realloc(lines, (count + 1) * sizeof(char *));
        lines = tmp;

        lines[count] = malloc(strlen(buffer) + 1);
        strcpy(lines[count], buffer);
        count++;
    }

    fclose(file);

    printf("Содержимое файла:\n");
    for (int i = 0; i < count; i++) {
        printf("%s\n", lines[i]);
        free(lines[i]);  
    }
    free(lines); 

    return 0;
}


