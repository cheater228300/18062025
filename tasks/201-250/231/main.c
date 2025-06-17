/*Условие задачи 231:
231. Напишите функцию, которая принимает массив целых чисел и его длину, создаёт копию массива в динамической памяти и возвращает указатель на неё.
*/

#include <stdio.h>
#include <stdlib.h>
int* arr_copy(int* arr,int size){
    int* ptr=malloc(size*sizeof(int));
    for(int i=0;i<size;i++){
        ptr[i]=arr[i];
    }
    return ptr;
}
void print_arr(int* arr,int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main() {
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(int);
    int* arr2=arr_copy(arr,size);
    print_arr(arr2,size);
    return 0;
}
