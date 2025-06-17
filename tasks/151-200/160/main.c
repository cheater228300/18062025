/*
Условие задачи 160:
160. Передайте, массив в другую функцию только для чтения.
*/

#include <stdio.h>

// const указывает, что массив нельзя изменять
void printArray(const int arr[], int size) {
    printf("Элементы массива: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
        // arr[i] = 0; // Ошибка компиляции - массив только для чтения
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    printArray(arr, size);
    
    return 0;
}
