// Условно компилируйте часть кода с помощью #ifdef
//Решение: -DPRINT - определяет макрос
#include "header.h"

int main(){
    #ifdef PRINT 
    printf("Hello World!\n");
    #endif
    return 0;
}
