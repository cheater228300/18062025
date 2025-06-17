/*Условие задачи 223:
223. Напишите программу, демонстрирующую утечку памяти.
gcc -g main.c -o main
valgrind --leak-check=full ./main*/

#include <stdlib.h>

void leakMemory() {
    int *ptr = malloc(100 * sizeof(int)); // Выделяем память
    // Забыли free(ptr) - утечка 400 байт (на 32-битной системе)
}

int main() {
    while (1) {
        leakMemory(); // При каждом вызове утекает память
    }
    return 0;
}

// Как обнаружить утечки:
// - В Linux: 
// valgrind --leak-check=full 
// ./program
