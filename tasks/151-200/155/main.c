/*
Условие задачи 155:
155. Вычислите среднее значение элементов массива.
*/

#include <stdio.h>

double calculateAverage(int arr[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}

int main() {
    int arr[] = {4, 6, 8, 2, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("Среднее значение: %.2f\n", calculateAverage(arr, size));
    
    return 0;
}
