/*
Условие задачи 157:
157. Проверьте, есть ли в массиве дубликаты.
*/

#include <stdio.h>
#include <stdbool.h>

bool hasDuplicates(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int arr[] = {1, 2, 3, 2, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    if (hasDuplicates(arr, size)) {
        printf("В массиве есть дубликаты\n");
    } else {
        printf("Дубликатов нет\n");
    }
    
    return 0;
}
