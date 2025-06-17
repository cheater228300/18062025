/*Условие задачи 220:
220. Увеличьте размер выделенного массива с помощью realloc().*/

#include <stdio.h>
#include <stdlib.h>
#define TEN 10
int main() {
    int* arr=malloc(10*sizeof(int));
    int* ptr=realloc(arr,20*sizeof(int));
    arr=ptr;
    arr[11]=11;
    printf("%d\n",arr[11]);
    return 0;
}
