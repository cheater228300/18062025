/*Условие задачи 238:
238. Напишите программу, которая создаёт одномерный массив с помощью calloc, выводит его содержимое и объясняет разницу между calloc и malloc.*/

#include <stdio.h>
#include <stdlib.h>
void print_arr(int* arr,int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main() {
    int* arr1=calloc(10,sizeof(int));
    int* arr2=malloc(10*sizeof(int));
    print_arr(arr1,10);
    print_arr(arr2,10);
    
    return 0;
}
