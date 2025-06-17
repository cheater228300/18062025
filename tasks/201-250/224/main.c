/*Условие задачи 224:
224. Объясните разницу между статической и динамической памятью.*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
void fill_arr(int* arr){
    for (int i=0;i<SIZE;i++){
        arr[i]=i;
    }
}
int main() {
    int arr1[SIZE];
    int* arr2=malloc(SIZE*sizeof(int));
    
    return 0;
}
