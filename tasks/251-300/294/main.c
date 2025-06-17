/*
Условие задачи 294:
294. Объясните разницу между внутренним и внешним связыванием.
*/

// Файл file1.c:

#include <stdio.h>

static int internal_var = 10;  // внутреннее связывание — видна только в этом файле
int external_var = 20;         // внешнее связывание — видна во всех файлах

void print_vars() {
    printf("internal_var = %d\n", internal_var);
    printf("external_var = %d\n", external_var);
}

/*Файл file2.c
#include <stdio.h>

extern int external_var;  // объявление внешней переменной из file1.c
// extern int internal_var; // Ошибка! internal_var с static, не видна здесь

void print_vars();

int main() {
    print_vars();
    printf("external_var из file2.c = %d\n", external_var);

    // printf("internal_var из file2.c = %d\n", internal_var); // Ошибка!

    return 0;
}
*/
/*
Объяснение:

internal_var объявлена с static в file1.c, поэтому она видна только в file1.c.

external_var без static — это глобальная переменная с внешним связыванием, её можно использовать и из file2.c через extern.

Попытка обратиться к internal_var из file2.c приведёт к ошибке компиляции.*/
//gcc file1.c file2.c -o program
//./program
