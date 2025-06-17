/*Условие задачи 145:
145. Реализуйте функцию, возвращающую среднее значение элементов.*/

#include <stdio.h>
#include <stdlib.h>

float sr(float* arr,int size){
    float sum=0;
    for (int i =0 ; i< size;i++){
        sum=sum+arr[i];
    }
    return sum/size;
}
int main() {
    float arr[]={1,2,3,4,5,6,7}; //28
    int size= sizeof(arr)/sizeof(int);
    printf("%f\n",sr(arr,size));//28/7=4
    return 0;
}
