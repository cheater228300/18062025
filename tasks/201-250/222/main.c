/*
Условие задачи 222:
222. Напишите функцию, возвращающую указатель на динамически выделенный массив.
*/

#include <stdio.h>
#include <stdlib.h>
int* create_arr(int size){
    int* arr=malloc(size*sizeof(int)); 
    return arr;
}
int main() {
    int n = 10;
    int* ptr= create_arr(n);
    for (int i=0;i<n;i++){
        ptr[i]=i;
    }
    printf("%d\n",ptr[2]);
    free(ptr);
    return 0;
}
