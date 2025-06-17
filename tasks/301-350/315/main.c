// Задача 315Напишите программу, которая поддерживает флаги `--help` и `--version`. 
//При наличии этих флагов программа должна выводить соответствующую 
//информацию. 
#include <stdio.h>
#include <string.h>

void print_help() {
    printf("Опции:\n");
    printf("  --help     Показать справку и выйти\n");
    printf("  --version  Показать версию и выйти\n");
}

void print_version() {
    printf("версия 1\n");
}

int main(int argc, char *argv[]) {
    // Обработка флагов
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "--help") == 0) {
            print_help();
            return 0;
        }
        else if (strcmp(argv[i], "--version") == 0) {
            print_version();
            return 0;
        }
    }
    
    return 0;
}
