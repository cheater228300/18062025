/*
Условие задачи 134:
134. Напишите программу, которая подсчитывает количество слов, строк и символов в текстовом файле.
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    const char *filename = "input.txt"; //Нужно создать текстовый файл input.txt с каким-то текстом
    FILE *file = fopen(filename, "r");

    if (!file) {
        perror("Ошибка при открытии файла");
        return 1;
    }

    int ch;
    int in_word = 0;
    int word_count = 0;
    int line_count = 0;
    int char_count = 0;

    while ((ch = fgetc(file)) != EOF) {
        char_count++;

        if (ch == '\n')
            line_count++;

        if (isspace(ch)) {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            word_count++;
        }
    }

    fclose(file);

    printf("Файл: %s\n", filename);
    printf("Символов: %d\n", char_count);
    printf("Слов:     %d\n", word_count);
    printf("Строк:    %d\n", line_count);

    return 0;
}
