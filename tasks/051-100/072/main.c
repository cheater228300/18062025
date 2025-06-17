/*
Условие задачи 072:
72. Используйте тернарный оператор вместо простого if-else.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a=1,b=2,c=3,max=0;
    max=((a>b)&&(a>c))?a:(((b>a)&&(b>c))?b:c);
    printf("%d\n",max);
    return 0;
}
