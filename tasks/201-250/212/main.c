/*Условие задачи 212:
212. Создайте ошибку segmentation fault и найдите ее с помощью GDB.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int* ptr=NULL;
    *ptr=5;
    printf("\n");
    return 0;
}
