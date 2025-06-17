/*
Условие задачи 299:
299. Создайте статическую (static) функцию и попробуйте вызвать её из другого файла.
*/

#include <stdio.h>

// Объявляем функцию, определённую в другом файле
void try_call();
//extern void hidden_function(); ошибка
int main() {
    try_call();
    return 0;
}
// helper.c
// #include <stdio.h>

// // Статическая функция: доступна только внутри этого файла
// static void hidden_function() {
//     printf("Я — static функция внутри helper.c!\n");
// }

// void try_call() {
//     hidden_function(); // работает, потому что вызов в том же файле
// }
// gcc main.c helper.c -o program
// ./program
