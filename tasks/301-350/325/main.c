/*
Условие задачи 325:
325. Реализуйте функцию, которая возвращает указатель на структуру, содержащую результаты анализа массива (минимум, максимум, среднее значение).
*/

#include <stdio.h>
#include <stdlib.h>

// Структура для хранения результатов анализа
typedef struct
{
    int min;
    int max;
    double average;
} ArrayStats;

// Функция анализа массива
ArrayStats *analyzeArray(int *arr, int size)
{
    if (size <= 0 || arr == NULL)
    {
        return NULL;
    }

    // Выделяем память для структуры
    ArrayStats *stats = (ArrayStats *)malloc(sizeof(ArrayStats));
    if (stats == NULL)
    {
        return NULL;
    }

    // Инициализация значений
    stats->min = arr[0];
    stats->max = arr[0];
    stats->average = 0;

    // Вычисление минимума, максимума и суммы для среднего
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < stats->min)
        {
            stats->min = arr[i];
        }
        if (arr[i] > stats->max)
        {
            stats->max = arr[i];
        }
        sum += arr[i];
    }

    // Вычисление среднего
    stats->average = (double)sum / size;

    return stats;
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

    // Анализ массива
    ArrayStats *stats = analyzeArray(arr, size);
    if (stats == NULL)
    {
        printf("Ошибка анализа массива\n");
        free(arr);
        return 1;
    }

    // Вывод результатов
    printf("Минимум: %d\n", stats->min);
    printf("Максимум: %d\n", stats->max);
    printf("Среднее: %.2f\n", stats->average);

    // Освобождение памяти
    free(stats);
    free(arr);

    return 0;
}
