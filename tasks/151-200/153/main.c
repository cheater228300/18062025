/*
Условие задачи 153:
153. Напишите программу, заполняющую массив числами от 1 до N.
*/

#include <stdio.h>
#include <stdlib.h>

void fill_array(int *arr, int n) {
    if (n > 0) {
        // Для положительного N: 1, 2, 3, ..., N
        for (int i = 0; i < n; i++) {
            arr[i] = i + 1;
        }
    } else {
        // Для отрицательного N: -1, -2, -3, ..., N
        for (int i = 0; i < -n; i++) {
            arr[i] = -(i + 1);
        }
    }
}

int main() {
    int n;
    printf("Введите N: ");
    scanf("%d", &n);
    
    if (n == 0) {
        printf("N не может быть нулем!\n");
        return 1;
    }
    
    int size = (n > 0) ? n : -n;
    int *array = (int*)malloc(size * sizeof(int));
    
    fill_array(array, n);
    
    printf("Массив: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    free(array);
    return 0;
}
