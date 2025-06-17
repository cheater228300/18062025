/*
Условие задачи 071:
71. Напишите программу, определяющую максимальное из трех чисел через if-else.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a=1,b=2,c=3,max=0;
    if ((a>b)&&(a>c))
        max=a;
    else if ((b>a)&&(b>c))
        max=b;
    else if ((c>a)&&(c>b))
        max=c;
    printf("%d\n",max);
    return 0;
}
