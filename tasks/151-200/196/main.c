/*
Условие задачи 196:
196. Реализуйте макрос ARRAY_INIT(arr, val), инициализирующий массив заданным значением.
*/

#include <stdio.h>

#define ARRAY_INIT(arr, val)                     \
    for (size_t i = 0; i < ARRAY_SIZE(arr); i++) \
    arr[i] = val // Заполнение массива значением

int main()
{
    int arr[5];
    ARRAY_INIT(arr, 7); // Заполняет массив семерками
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]); // Проверка
    return 0;
}
