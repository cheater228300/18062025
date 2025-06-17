/*Условие задачи 218:
218. Выделите память под массив с помощью malloc().*/

#include <stdio.h>
#include <stdlib.h>
#define TEN 10
int main() {
    int* arr=malloc(TEN*sizeof(int));
    for (int i=0;i<TEN;i++){
        arr[i]=i;
    }
    printf("%d\n",arr[5]);
    free(arr);
    return 0;
}
