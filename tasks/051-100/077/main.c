/*
Условие задачи 077:
77. Создайте программу, которая принимает два числа и операцию (+, -, *, /). Используйте switch, чтобы выполнить соответствующую операцию и вывести результат.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a,b,res;
    char c;
    scanf("%d %c %d",&a,&c,&b);
    switch(c){
        case '+':res=a+b;break;
        case '-':res=a-b;break;
        case '*':res=a*b;break;
        case '/':res=a/b;break;
        default:printf("неизвестный оператор");
    }
    printf("Результат a%cb=%d\n",c,res);
    return 0;
}
