/*
Условие задачи 115:
115. Напишите программу, которая запрашивает у пользователя число и выводит его цифры по одной, начиная с последней.
*/

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num == 0) {
        printf("0\n");
    } else {
        while (num != 0) {
            printf("%d\n", num % 10);
            num /= 10;
        }
    }
    
    return 0;
}

