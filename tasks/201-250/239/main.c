/*Условие задачи 239:
239. Напишите программу, которая выделяет память под буфер фиксированного размера,
считывает данные из стандартного ввода и сохраняет их в этот буфер с возможностью динамического расширения.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int size=10;
    int len=0;
    char* buffer=malloc(size);

    printf("строка ");
    char ch;
    while ((ch=getchar())!='\n'&&ch!=EOF){
        buffer[len++]=ch;
        if(len>=size){
            size=size*2;
            char* temp=realloc(buffer,size);
            buffer=temp;
        }
    }
    buffer[len]='\0';
    printf("%s\n",buffer);
    return 0;
}
