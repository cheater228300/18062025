/*Условие задачи 227:
227. Создайте программу, которая считывает размер массива у пользователя, выделяет память под него, заполняет случайными числами и выводит сумму элементов.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int size;
    printf("Введите размер массива: ");
    scanf("%d", &size);

    int *arr = malloc(size * sizeof(int));
    if (!arr) {
        printf("Ошибка выделения памяти\n");
        return 1;
    }

    srand(time(0)); // Инициализация генератора случайных чисел
    int sum = 0;

    // Заполнение и подсчет суммы
    printf("Массив: ");
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100; // Числа от 0 до 99
        printf("%d ", arr[i]);
        sum += arr[i];
    }

    printf("\nСумма элементов: %d\n", sum);
    free(arr);
    return 0;
}
