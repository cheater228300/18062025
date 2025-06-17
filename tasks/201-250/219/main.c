/*Условие задачи 219:
219. Используйте calloc() для создания массива и инициализации нулями.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int* arr=calloc(10,sizeof(int));
    printf("%d\n",arr[2]);
    return 0;
}
