/*
Условие задачи 053:
53. Создайте программу, которая считывает строку и выводит только те слова, которые начинаются с заглавной буквы.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORDS 100
#define MAX_WORD_LEN 50

void findCapitalizedWords(char *str)
{
    char *words[MAX_WORDS];
    int wordCount = 0;

    char *token = strtok(str, " \t\n");
    while (token != NULL && wordCount < MAX_WORDS)
    {
        words[wordCount] = token;
        wordCount++;
        token = strtok(NULL, " \t\n");
    }

    printf("Слова с заглавной буквы:\n");
    for (int i = 0; i < wordCount; i++)
    {
        if (isupper(words[i][0]))
        {
            printf("%s\n", words[i]);
        }
    }
}

int main()
{
    char input[256];

    printf("Введите строку: ");
    fgets(input, sizeof(input), stdin);

    findCapitalizedWords(input);

    return 0;
}
