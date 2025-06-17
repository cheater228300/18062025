/*Условие задачи 242:
242. Напишите программу, которая читает несколько строк текста, хранит их в динамическом массиве и выводит в обратном порядке.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n=0;
    int count=0;
    char** arr=malloc(sizeof(char*));
    printf("кол-во ");
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++){
        char buffer[100];
        printf("Введите строку ");
        fgets(buffer,100,stdin);
        if(buffer[0]=='\0')break;
        buffer[strlen(buffer)-1]='\0';
        arr[count]=malloc(strlen(buffer)+1);
        strcpy(arr[i],buffer);
        count++;
    }
    for(int i=n-1;i>=0;i--){
        printf("%s\n",arr[i]);
    }
    return 0;
}
