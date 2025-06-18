/*
Условие задачи 023:
23. Подключите заголовочный файл <stdbool.h> и объявите логическую переменную _Bool flag; или bool flag;. Используйте её в условии if-else для вывода сообщения в зависимости от значения.
*/

#include <stdio.h>
#include <stdbool.h>  // Подключаем для bool

int main() {
    bool flag = true;  // или _Bool flag = 1;

    if (flag) {
        printf("Flag is true\n");
    } else {
        printf("Flag is false\n");
    }

    // Можно поменять значение
    flag = false;

    if (flag) {
        printf("Flag is true\n");
    } else {
        printf("Flag is false\n");
    }

    return 0;
}
