/*Условие задачи 224:
224. Объясните разницу между статической и динамической памятью.*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
void fill_arr(int* arr,int size){
    for (int i=0;i<size;i++){
        arr[i]=i;
    }
    
}
int main() {
    int arr1[SIZE];
    int size;
    printf("Введите размер массива: ");
    scanf("%d",&size);
    int* arr2=malloc(size*sizeof(int));
    fill_arr(arr1,SIZE);
    fill_arr(arr2,size);
    printf("%d ",arr1[5]);
    printf("%d",arr2[10]);
    
    free(arr2);
    return 0;
}
