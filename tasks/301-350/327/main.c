/*
Условие задачи 327:
327. Создайте функцию, которая заменяет все вхождения одной подстроки в строке на другую подстроку.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Функция замены подстроки
char *replaceSubstring(const char *str, const char *oldSub, const char *newSub)
{
    if (str == NULL || oldSub == NULL || newSub == NULL)
    {
        return NULL;
    }

    // Вычисляем длины строк
    size_t strLen = strlen(str);
    size_t oldLen = strlen(oldSub);
    size_t newLen = strlen(newSub);

    // Подсчитываем количество вхождений подстроки
    int count = 0;
    const char *pos = str;
    while ((pos = strstr(pos, oldSub)))
    {
        count++;
        pos += oldLen;
    }

    // Вычисляем длину новой строки
    size_t newStrLen = strLen + count * (newLen - oldLen);
    char *result = (char *)malloc(newStrLen + 1); // +1 для '\0'
    if (result == NULL)
    {
        return NULL;
    }

    // Замена подстрок
    char *current = result;
    const char *start = str;
    while (count--)
    {
        pos = strstr(start, oldSub);
        size_t segmentLen = pos - start;

        // Копируем часть до подстроки
        strncpy(current, start, segmentLen);
        current += segmentLen;

        // Копируем новую подстроку
        strcpy(current, newSub);
        current += newLen;

        // Перемещаем указатель на оставшуюся часть строки
        start = pos + oldLen;
    }

    // Копируем оставшуюся часть строки
    strcpy(current, start);

    return result;
}

int main()
{
    char str[256];
    char oldSub[256];
    char newSub[256];

    printf("Введите строку: ");
    scanf(" %[^\n]", str);

    printf("Введите подстроку для замены: ");
    scanf(" %[^\n]", oldSub);

    printf("Введите новую подстроку: ");
    scanf(" %[^\n]", newSub);

    char *result = replaceSubstring(str, oldSub, newSub);
    if (result != NULL)
    {
        printf("Результат: %s\n", result);
        free(result);
    }
    else
    {
        printf("Ошибка замены подстроки\n");
    }

    return 0;
}
