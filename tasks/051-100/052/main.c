/*
Условие задачи 052:
52. Напишите функцию, которая разбивает строку на слова и сохраняет их в массив указателей.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_WORDS 100
#define MAX_WORD_LEN 50

void splitString(char *str, char *words[], int *wordCount)
{
    char *token = strtok(str, " \t\n");
    *wordCount = 0;

    while (token != NULL && *wordCount < MAX_WORDS)
    {
        words[*wordCount] = (char *)malloc(strlen(token) + 1);
        strcpy(words[*wordCount], token);
        (*wordCount)++;
        token = strtok(NULL, " \t\n");
    }
}
int main()
{
    char input[256];
    char *words[MAX_WORDS];
    int wordCount = 0;

    printf("Введите строку: ");
    fgets(input, sizeof(input), stdin);

    splitString(input, words, &wordCount);

    printf("Найдено %d слов:\n", wordCount);
    for (int i = 0; i < wordCount; i++)
    {
        printf("%d: %s\n", i + 1, words[i]);
        free(words[i]);
    }

    return 0;
}
