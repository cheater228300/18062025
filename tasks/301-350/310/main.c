/*
Условие задачи 310:
310. Создайте программу, которая проверяет, содержится ли определённое слово (например, "ключ") среди переданных аргументов.
./program тест ключ что-то
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    const char *target = "ключ";
    int found = 0;

    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], target) == 0) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Слово \"%s\" найдено среди аргументов.\n", target);
    else
        printf("Слово \"%s\" не найдено.\n", target);

    return 0;
}
