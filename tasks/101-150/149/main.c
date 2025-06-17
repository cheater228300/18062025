/*
Условие задачи 149:
149. Реализуйте простой калькулятор с меню, используя указатели на функции для операций сложения, вычитания, умножения и деления.
*/

#include <stdio.h>
#include <stdlib.h>
int sum(int a,int b){return a+b;}
int minus(int a,int b){return a-b;}
int multiply(int a,int b){return a*b;}
int divide(int a,int b){return (b!=0)?a/b:0;}

void calculate(int sum(int a,int b),int minus(int a,int b),int multiply(int a,int b),int divide(int a,int b),int choice,int a,int b){
    switch(choice){
        case 1:printf("%d\n",sum(a,b));break;
        case 2:printf("%d\n",minus(a,b));break;
        case 3:printf("%d\n",multiply(a,b));break;
        case 4:printf("%d\n",divide(a,b));break;
    }
}
int main() {
    printf("Введите два числа: ");
    int a,b;
    int choice;
    scanf("%d %d",&a,&b);
    printf("Выберите операцию:\n");
    printf("1.+ 2.- 3.* 4./\n");
    scanf("%d",&choice);
    calculate(sum,minus,multiply,divide,choice,a,b);
    
    return 0;
}
