/*Условие задачи 144:
144. Напишите функцию, которая возвращает максимальный элемент массива.*/

#include <stdio.h>
#include <stdlib.h>

int func(int* arr,int size){
    int max=0;
    for (int i =0; i<size;i++){
        if (arr[i]>max) 
            max=arr[i];
    }
    return max;
}
int main() {
    int arr[]={11,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("%d\n",func(arr,size));
    return 0;
}
