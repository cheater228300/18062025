//Напишите макрос, который выводит значение переменной и её имя.
// #name - превращает имя переменной в строку
#include <stdio.h>
#define PRINT_NAME_VALUE(name) printf(#name"=%d\n",name)
int main(){
    int name=2;
    PRINT_NAME_VALUE(name);
    return 0;
}
