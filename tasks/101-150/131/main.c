/*
Условие задачи 131:
131. Реализуйте простой аналог утилиты grep – программа должна искать строки, содержащие заданную подстроку, и выводить их.
*/

#include <stdio.h>
#include <string.h>

#define MAX_LINE 1024

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Использование: %s <подстрока>\n", argv[0]);
        return 1;
    }

    char *pattern = argv[1];
    char line[MAX_LINE];

    while (fgets(line, sizeof(line), stdin)) {
        if (strstr(line, pattern)) {
            printf("%s", line);  // строка содержит подстроку — выводим
        }
    }

    return 0;
}
