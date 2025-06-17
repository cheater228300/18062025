/*
Условие задачи 235:
235. Напишите программу, которая реализует простой список имён, используя динамическое выделение памяти под каждую строку, и позволяет пользователю добавлять новые имена.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char* names[100];
    int count=0;
    char buffer[100];
    while(1){
        printf("имя или пустая строка");
        fgets(buffer,100,stdin);
        buffer[strlen(buffer)-1]='\0';
        if (buffer[0]=='\0')break;
        names[count]=malloc(sizeof(buffer)+1);
        strcpy(names[count],buffer);
        count++;
    }
    for(int i=0;i<count;i++){
        printf("%s\n",names[i]);
    }
    return 0;
}
