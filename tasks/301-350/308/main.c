/*
Условие задачи 308:
308. Реализуйте программу, которая находит максимальное значение среди переданных числовых аргументов.
./program 3 7 2 10 5
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Использование: %s число1 число2 ...\n", argv[0]);
        return 1;
    }

    int max = atoi(argv[1]);

    for (int i = 2; i < argc; i++) {
        int val = atoi(argv[i]);
        if (val > max)
            max = val;
    }

    printf("Максимум: %d\n", max);
    return 0;
}
