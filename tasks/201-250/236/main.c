/*Условие задачи 236:
236. Напишите функцию, которая принимает массив целых чисел и его длину, увеличивает его размер на 10 элементов с помощью realloc и дополняет нулями.*/

#include <stdio.h>
#include <stdlib.h>

int* add_cap(int* arr,int* size){
    int* arr2=realloc(arr,(*size+10)*sizeof(int));
    for(int i=*size;i<*size+10;i++){
        arr2[i]=0;
    }
    *size+=10;
    return arr2;
}
int main() {
    int size=10;
    int* arr=malloc(size*sizeof(int));
    for(int i=0;i<size;i++){
        arr[i]=i;
    }
    
    arr=add_cap(arr,&size);

    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
