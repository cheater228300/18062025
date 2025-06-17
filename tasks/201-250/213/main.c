/*Условие задачи 213:
213. Используйте Valgrind для поиска утечек памяти в программе.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int* arr = malloc(100 * sizeof(int));
//  if (!arr) {
//      perror("malloc failed");
//      return 1;
//  }

    // Комментарии убираем только после того, как в valgrind выдало ошибку

//  free(arr); // Освобождаем память
    return 0;
}


//gcc -g main.c -o prog
//valgrind --leak-check=full ./prog
//выключаем терминал и убираем комментарии, потом по новой
