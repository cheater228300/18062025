/*
Условие задачи 167:
167. Реализуйте удаление всех вхождений заданного числа из массива с обновлением его размера.
*/

#include <stdio.h>

void removeOccurrences(int arr[], int *size, int target) {
    int j = 0; // индекс для записи новых элементов
    for (int i = 0; i < *size; i++) {
        if (arr[i] != target) {
            arr[j++] = arr[i];
        }
    }
    *size = j; // обновляем размер массива
}

int main() {
    int arr[] = {4, 2, 5, 2, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Введите число для удаления: ");
    scanf("%d", &target);

    removeOccurrences(arr, &size, target);

    printf("Массив после удаления всех вхождений %d: ", target);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nРазмер массива теперь: %d\n", size);

    return 0;
}
