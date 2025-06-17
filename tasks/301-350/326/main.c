/*
Условие задачи 326:
326. Напишите программу, которая находит наиболее часто встречающийся элемент в массиве целых чисел.
*/

#include <stdio.h>
#include <stdlib.h>

// Функция для поиска наиболее частого элемента
int findMostFrequent(int *arr, int size)
{
    if (size <= 0 || arr == NULL)
    {
        return -1; // Ошибка
    }

    int maxCount = 0;
    int mostFrequent = arr[0];

    // Перебираем все элементы
    for (int i = 0; i < size; i++)
    {
        int count = 0;

        // Считаем сколько раз встречается текущий элемент
        for (int j = 0; j < size; j++)
        {
            if (arr[j] == arr[i])
            {
                count++;
            }
        }

        // Если текущий элемент встречается чаще, обновляем значения
        if (count > maxCount)
        {
            maxCount = count;
            mostFrequent = arr[i];
        }
    }

    return mostFrequent;
}

int main()
{
    int size;
    printf("Введите размер массива: ");
    scanf("%d", &size);

    if (size <= 0)
    {
        printf("Неверный размер массива\n");
        return 1;
    }

    int *arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL)
    {
        printf("Ошибка выделения памяти\n");
        return 1;
    }

    printf("Введите элементы массива:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int result = findMostFrequent(arr, size);
    printf("Наиболее часто встречающийся элемент: %d\n", result);

    free(arr);
    return 0;
}
