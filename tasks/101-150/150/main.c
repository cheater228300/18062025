/*Условие задачи 150:
150. Напишите функцию, принимающую указатель на функцию сравнения и массив, и возвращающую индекс минимального элемента.*/

#include <stdio.h>
#include <stdlib.h>
int min_el(int min(int a,int b),int* arr,int size){
    int min_index=0;
    for (int i=1;i<size;i++){
        if(min(arr[i],arr[min_index]))
            min_index=i;
    }
    return min_index;
}
int min(int a,int b){
    return a<b;
}
int main() {
    int arr[]={4,3,2,1,5,6,7,8};
    int size=sizeof(arr)/sizeof(int);
    printf("%d\n",min_el(min,arr,size));

    return 0;
}
