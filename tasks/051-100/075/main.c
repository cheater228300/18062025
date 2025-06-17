/*
Условие задачи 075:
75. Приведите пример, switch-case с default.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice;
    printf("Выберите товар\n1.Мороженое\n2.Кола\n3.Хот-дог\nВведите номер\n");
    scanf("%d",&choice);
    printf("Ваш выбор: ");
    switch(choice){
        case 1:
            printf("Мороженое\n");
            break;
        case 2:
            printf("Кола\n");
            break;
        case 3:
            printf("Хот-дог\n");
            break;
        default:
            printf("Неверный выбор\n");
            break;
    }
    
    return 0;
}
