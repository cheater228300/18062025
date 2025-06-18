/*
Условие задачи 323:
323. Напишите программу, которая читает CSV-файл и выводит его содержимое в табличном виде.
*/

#include <stdio.h>
#include <string.h>

#define MAX_LINE 1024

int main() {
    FILE *f = fopen("data.csv", "r");
    char line[MAX_LINE];

    while (fgets(line, sizeof(line), f)) {
        // Удаляем символ перевода строки
        line[strcspn(line, "\n")] = 0;

        char *token = strtok(line, ",");
        while (token) {
            printf("%-15s", token); // Вывод с фиксированной шириной
            token = strtok(NULL, ",");
        }
        printf("\n");
    }

    fclose(f);
    return 0;
}
