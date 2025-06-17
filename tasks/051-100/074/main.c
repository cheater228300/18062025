/*
Условие задачи 074:
74. Реализуйте меню с выбором действия через if-else.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice;
    printf("Выберите товар\n1.Мороженое\n2.Кола\n3.Хот-дог\nВведите номер\n");
    scanf("%d",&choice);
    printf("Ваш выбор: ");
    if (choice == 1)
            printf("Мороженое\n");
    else if (choice == 2)
            printf("Кола\n");
    else if (choice == 3)
            printf("Хот-дог\n");
    
    
    return 0;
}
