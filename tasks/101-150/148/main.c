/*Условие задачи 148:
148. Напишите программу, которая принимает указатель на
математическую функцию (int func(int x)) и строит таблицу 
значений этой функции на заданном интервале.*/

#include <stdio.h>

int func(int x){
    return x*x;
}
int print_table(int func(int x),int start,int end){
    printf("x   f(x)\n");
    for (int x=start;x<end;x++){
        printf("%2d  %3d\n",x,func(x));
    }
}
int main(){
    print_table(func,-5,5);
    return 0;
}
