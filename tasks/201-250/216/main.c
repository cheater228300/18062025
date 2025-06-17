/*Условие задачи 216:
216. Создайте программу с неопределенным поведением (например, использование указателя после free()).*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int* arr=malloc(10*sizeof(int));
    for(int i=0;i<10;i++){
        arr[i]=i;
        printf("%d ",arr[i]);
    }
    free(arr);
    printf("\n%d\n",*(arr));

    int* ptr=NULL;
    *ptr=5;
    printf("%d",*ptr);
    return 0;
}
