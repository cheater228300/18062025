/*
Условие задачи 141:
141. Напишите функцию, которая принимает указатель на строку и возвращает длину строки без использования стандартной библиотеки.
*/

#include <stdio.h>
#include <stdlib.h>

int len_str(const char* ptr){
    int len=0;
    for (int i =0; ptr[i]!='\0';i++){
        len++;
    }
    return len;
}
int len_str2(const char* ptr){
    int len=0;
    while (*ptr++)len++;
}
int main() {
    const char* str= "hello";
    int len = len_str(str);
    printf("%d\n",len);
    return 0;
}
