/*Условие задачи 232:
232. Напишите программу, которая выделяет память под массив строк, запрашивает у пользователя количество строк и сами строки, затем выводит их обратно.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;
    printf("Кол-во строк\n");
    scanf("%d",&n);
    getchar();
    char** arr=malloc(n*sizeof(char*));
    for(int i=0;i<n;i++){
        printf("строка: ");
        char buffer[100];
        fgets(buffer,100,stdin);
        buffer[strcspn(buffer,"\n") ]='\0';
        arr[i]=malloc(sizeof(buffer)+1);
        strcpy(arr[i],buffer);
    }
    for(int i=0;i<n;i++){
        printf("%s\n",arr[i]);
        free(arr[i]);
    }
    free(arr);
    return 0;
}
