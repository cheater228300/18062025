/*Условие задачи 147:
147. Напишите функцию, возвращающую указатель на динамический массив.*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int* create_arr(int n){
    int* arr = malloc(n*(sizeof(int)));
    for (int i=0 ; i<n ; i++){
        arr[i]=i;
    }
    return arr;
}
int main() {
    int* ptr=create_arr(MAX);
    for (int i=0;i<MAX;i++){
        printf("%d ",ptr[i]);
    }
    return 0;
}
