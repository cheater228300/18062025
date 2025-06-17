/*
Условие задачи 198:
198. Создайте макрос LOG(level, msg), который выводит сообщение с уровнем лога, если уровень активен.
*/

#include <stdio.h>

#define LOG_LEVEL 2 // Сообщения с level <= 2 выводятся

#define LOG(level, ...)     \
    if (level <= LOG_LEVEL) \
    printf("LOG[%d]: " __VA_ARGS__)

int main()
{
    LOG(1, "Critical error\n"); // Выведется (1 <= 2)
    LOG(3, "Debug info\n");     // Не выведется (3 > 2)
    return 0;
}
