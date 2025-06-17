// Задача 318Создайте функцию, которая возвращает указатель на строку, ..представляющую число в произвольной системе счисления (основание от 2 до 16). 
#include <stdio.h>
#include <stdlib.h>
char *schisl(int i, int sys);
int main() {
    int i;
    printf("Введите число: ");
    scanf("%d", &i);
    char *res = schisl(i, 2);
    printf("для числа %d: %s\n", i, res);
    return 0;
}
char *schisl(int i, int sys){
    if (i < 2 || i > 16)
        return NULL;
    if (sys == 0){
        char * res = (char*)malloc(2 * sizeof(char));
        res[0] = '0';
        res[1] = '\0';
        return res;
    }

    int temp = i;
    int length = 0;
    while (temp != 0) {
        temp /= sys;
        length++;
    }

    char *res = (char*)malloc((length+1)*sizeof(char));

    res[length] = '\0';
    int index = length-1;
    const char digits[] = "0123456789ABCDEF";

    do {
        res[index] = digits[i % sys];
        i /= sys;
        index--;
    } while (i != 0);
    return res;
}
