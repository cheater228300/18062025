/*
Условие задачи 234:
234. Напишите программу, которая создает массив указателей на целые числа, заполняет их значениями и корректно освобождает всю выделенную память.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int** arr=malloc(10*sizeof(int*));
    for (int i=0;i<10;i++){
        arr[i]=malloc(sizeof(int));
        *arr[i]=rand()%10;
    }
    for (int i=0;i<10;i++){
        printf("%d ",*arr[i]);
    }

    return 0;
}
