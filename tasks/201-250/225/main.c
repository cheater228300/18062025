/*
Условие задачи 225:
225. Приведите примеры использования alloca() и сравните с malloc().
alloca нельзя возвращать указатель и не надо free()
*/

#include <stdio.h>
#include <stdlib.h>
#include <alloca.h>
void fill_arr(int* arr,int size){
    for (int i=0;i<size;i++){
        arr[i]=i;
    }
}
int main() {
    int size=10;
    int* arr1=malloc(size*sizeof(int));
    fill_arr(arr1,size);
    
    free(arr1);
    int* arr2=alloca(size*sizeof(int));
    fill_arr(arr2,size);
    
    return 0;
}
