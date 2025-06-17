// Задача 314Создайте программу, которая выводит список всех переданных аргументов командной строки, по одному на строку.
#include <stdio.h>

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++){
        printf("№%d: %s\n", i, argv[i]);
    }
    return 0;
}
