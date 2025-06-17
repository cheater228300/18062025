/*Условие задачи 223:
223. Напишите программу, демонстрирующую утечку памяти.
gcc -g main.c -o main
valgrind --leak-check=full ./main*/

#include <stdio.h>
#include <stdlib.h>
void create_arr(int n){
    int* arr=malloc(n*sizeof(int));
    for(int i=0;i<10;i++){
        arr[i]=i;
    }
}
int main() {
    create_arr(10);
    
    return 0;
}
