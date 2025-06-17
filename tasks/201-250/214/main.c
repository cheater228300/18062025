/*Условие задачи 214:
214. Напишите программу, содержащую неинициализированную переменную, и найдите проблему с помощью инструментов.
gcc -g main.c -o main 
valgrind --track-origins=yes ./main*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    printf("%d\n",a);
    return 0;
}
