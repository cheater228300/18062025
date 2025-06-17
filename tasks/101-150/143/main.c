/*Условие задачи 143:
143. Напишите рекурсивную функцию для вычисления чисел Фибоначчи.
Числа Фибоначи - последовательность где каждое след число равно сумме двух чисел сзади
0 1 2 3 4 5 6 ... индексы
0 1 1 2 3 5 8 ... числа*/

#include <stdio.h>
#include <stdlib.h>

int func(int a){
    if(a==0)return 0;
    if(a==1)return 1;
    return func(a-1)+func(a-2);
}
int main(){
    int num;
    scanf("%d",&num);
    printf("%d\n",func(num));
    return 0;
}
