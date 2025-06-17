/*Условие задачи 213:
213. Используйте Valgrind для поиска утечек памяти в программе.
gcc -g main.c -o main
valgring --leak-check=full ./main
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int* arr=malloc(100*sizeof(int));

    return 0;
}
