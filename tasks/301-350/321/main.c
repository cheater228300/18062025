/*
Условие задачи 321:
321. Создайте функцию, которая принимает массив целых чисел и возвращает указатель на динамически выделенный массив, содержащий только уникальные значения.
*/

#include <stdio.h>
#include <stdlib.h>

int* unique_array(int *arr, int n, int *out_n) {
    int *res = malloc(n * sizeof(int));
    int c = 0;
    for (int i = 0; i < n; i++) {
        int found = 0;
        for (int j = 0; j < c; j++)
            if (arr[i] == res[j]) { found = 1; break; }
        if (!found) res[c++] = arr[i];
    }
    *out_n = c;
    return res;
}

int main() {
    int arr[] = {1,2,2,3,4,4,5};
    int n = sizeof(arr)/sizeof(arr[0]), out_n;
    int *uniq = unique_array(arr, n, &out_n);
    for (int i = 0; i < out_n; i++) printf("%d ", uniq[i]);
    printf("\n");
    free(uniq);
    return 0;
}
