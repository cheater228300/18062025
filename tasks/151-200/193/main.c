/*
Условие задачи 193:
193. Создайте макрос ARRAY_SIZE(arr), возвращающий размер массива.
*/

#include <stdio.h>

#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof(arr[0])) // Размер массива = общий размер / размер элемента

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    printf("Array size: %zu\n", ARRAY_SIZE(arr)); // Выведет 5
    return 0;
}
