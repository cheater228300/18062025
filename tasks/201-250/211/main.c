/*Условие задачи 211:
211. Выведите значения переменных во время выполнения в GDB.
команды: компиляция gcc -g main.c -o main
gbd ./main -> break main.c:12 ->display a b i ->next*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main() {
    int a=0,b=10;
    for (int i=0;i<MAX;i++){
        a++;
        b--;
    }
    return 0;
}
