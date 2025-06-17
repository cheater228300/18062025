// Задача 244 Напишите программу, которая создаёт массив целых чисел, фильтрует 
//его (например, оставляет только чётные), и возвращает новый массив в 
//динамической памяти. 
#include <stdio.h>
#include <stdlib.h>

int* filter_even(const int* arr, int size, int* new_size) {
    // Сначала подсчитаем количество чётных чисел
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    
    // Выделяем память под новый массив
    int* result = (int*)malloc(count * sizeof(int));
    if (result == NULL) {
        *new_size = 0;
        return NULL;
    }
    
    // Заполняем новый массив чётными числами
    int index = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            result[index++] = arr[i];
        }
    }
    
    *new_size = count;
    return result;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int new_size;
    int* filtered = filter_even(arr, size, &new_size);
    
    if (filtered != NULL) {
        printf("Отфильтрованный массив (чётные числа): ");
        for (int i = 0; i < new_size; i++) {
            printf("%d ", filtered[i]);
        }
        printf("\n");
        
        free(filtered); // Не забываем освободить память
    } else {
        printf("Ошибка выделения памяти.\n");
    }
    
    return 0;
}
