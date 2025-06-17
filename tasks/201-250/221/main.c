/*
Условие задачи 221:
221. Освободите выделенную память и проверьте, что произойдет при повторном free().
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int main() {
    int* arr=malloc(SIZE*sizeof(int));
    for(int i=0;i<SIZE;i++){
        arr[i]=i;
    }
    free(arr);
    free(arr);
    return 0;
}
