/*
Условие задачи 132:
132. Напишите программу, которая считывает файл и записывает все слова в другой файл в обратном порядке.
*/
//гробик :)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORDS 10000
#define MAX_WORD_LEN 100

int main() {
    FILE *in = fopen("input.txt", "r"); //нужно создать файл input.txt и написать рандомные слова
    FILE *out = fopen("output.txt", "w"); //нужно создать пустой файл output.txt

    if (!in || !out) {
        printf("Ошибка при открытии файла.\n");
        return 1;
    }

    char *words[MAX_WORDS];
    int count = 0;
    char word[MAX_WORD_LEN];

    // Считываем все слова
    while (fscanf(in, "%99s", word) == 1) {
        words[count] = malloc(strlen(word) + 1);
        if (!words[count]) {
            printf("Ошибка выделения памяти.\n");
            return 1;
        }
        strcpy(words[count], word);
        count++;

        if (count >= MAX_WORDS) {
            printf("Превышено максимальное число слов.\n");
            break;
        }
    }

    // Записываем слова в обратном порядке
    for (int i = count - 1; i >= 0; i--) {
        fprintf(out, "%s", words[i]);
        if (i > 0) fprintf(out, " ");
        free(words[i]);  // освобождение памяти
    }

    fprintf(out, "\n");

    fclose(in);
    fclose(out);

    printf("Слова успешно записаны в обратном порядке в output.txt\n");
    return 0;
}
