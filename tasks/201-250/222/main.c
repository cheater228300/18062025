/*
Условие задачи 222:
222. Напишите функцию, возвращающую указатель на динамически выделенный массив.
ДУБЛИКАТ 147
*/

#include <stdio.h>
#include <stdlib.h>

int* createIntArray(int size) {
    int *arr = malloc(size * sizeof(int));
    if (arr == NULL) {
        return NULL; // Ошибка выделения
    }
    
    // Инициализация массива (опционально)
    for (int i = 0; i < size; i++) {
        arr[i] = i * 2;
    }
    
    return arr;
}

int main() {
    int *myArray = createIntArray(5);
    
    if (myArray != NULL) {
        for (int i = 0; i < 5; i++) {
            printf("%d ", myArray[i]); // 0 2 4 6 8
        }
        free(myArray); // Не забываем освободить!
    }
    
    return 0;
}
