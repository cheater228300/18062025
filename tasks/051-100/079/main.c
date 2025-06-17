/*
Условие задачи 079:
79. Реализуйте программу, которая принимает от пользователя оценку (от 1 до 5) и выводит её описание: 1 – Плохо, 2 – Неудовлетворительно, 3 – Удовлетворительно, 4 – Хорошо, 5 – Отлично.Используйте switch-case.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a,b,c;
    printf("Введите оценку: ");
    scanf("%d",&a);
    switch(a){
        case 1:printf("Плохо");break;
        case 2:printf("Неудовлетворительно");break;
        case 3:printf("Удовлетворительно");break;
        case 4:printf("Хорошо");break;
        case 5:printf("Отлично");break;
        default:printf("Неизвестная оценка");break;
    }
    printf("\n");
    return 0;
}
