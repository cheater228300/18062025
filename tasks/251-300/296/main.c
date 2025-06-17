/*
Условие задачи 296:
296. Объясните, как работают статические функции.
*/

// file1.c
#include <stdio.h>

static void helper() {
    printf("Это статическая функция, доступная только внутри file1.c\n");
}

void public_function() {
    helper();
}

/*
// file2.c
void public_function();

int main() {
    public_function();  // Вызовет helper() внутри file1.c

    // helper(); // Ошибка! helper не видна в этом файле

    return 0;
}
*/
