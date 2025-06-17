/*Условие задачи 311:
311. Напишите программу, которая принимает число из аргумента командной строки и вычисляет его факториал.*/

#include <stdio.h>
#include <stdlib.h>
int main(int arg, char *argv[]) {
    int i = 1;
    int res = 1;
    char *endptr;
    long num = strtol(argv[1], &endptr, 10);
    while (i <= num){
        res *= i;
        i++;
    }
    printf("факториал %ld = %d\n", num, res);
    return 0;
}
