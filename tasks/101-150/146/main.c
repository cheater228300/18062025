/*Условие задачи 146:
146. Напишите функцию, возвращающую длину строки.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int str_len(const char* str){
    int len = strlen(str);
    return len;
}
int main() {
    char str[]="hello wordl!";
    printf("%d\n",str_len(str));
    return 0;
}
