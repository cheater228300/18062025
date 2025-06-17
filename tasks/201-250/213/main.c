/*Условие задачи 213:
213. Используйте Valgrind для поиска утечек памяти в программе.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int* arr=malloc(100*sizeof(int));

    return 0;
}
