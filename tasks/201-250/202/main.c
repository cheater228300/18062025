/*
Условие задачи 202:
202. Реализуйте логирование через макросы с уровнем важности.
*/
//ГРОБ ПИЗДЕЦ СОБОЛЕЗНУЮ

#include <stdio.h>

// Уровни логирования
#define LOG_LEVEL_ERROR 0
#define LOG_LEVEL_WARN  1
#define LOG_LEVEL_INFO  2
#define LOG_LEVEL_DEBUG 3

// Текущий уровень логирования (можно менять)
#ifndef CURRENT_LOG_LEVEL
#define CURRENT_LOG_LEVEL LOG_LEVEL_DEBUG
#endif

// Макрос для логирования с уровнем важности и форматом
#define LOG(level, fmt, ...)                          \
    do {                                             \
        if (level <= CURRENT_LOG_LEVEL) {            \
            const char* level_str[] = {               \
                "ERROR", "WARN", "INFO", "DEBUG"     \
            };                                       \
            printf("[%s] " fmt "\n", level_str[level], ##__VA_ARGS__); \
        }                                            \
    } while (0)

// Удобные макросы для каждого уровня
#define LOG_ERROR(fmt, ...) LOG(LOG_LEVEL_ERROR, fmt, ##__VA_ARGS__)
#define LOG_WARN(fmt, ...)  LOG(LOG_LEVEL_WARN,  fmt, ##__VA_ARGS__)
#define LOG_INFO(fmt, ...)  LOG(LOG_LEVEL_INFO,  fmt, ##__VA_ARGS__)
#define LOG_DEBUG(fmt, ...) LOG(LOG_LEVEL_DEBUG, fmt, ##__VA_ARGS__)

int main() {
    LOG_ERROR("Ошибка: код %d", 1);
    LOG_WARN("Предупреждение");
    LOG_INFO("Информация");
    LOG_DEBUG("Отладка: переменная x=%d", 42);

    return 0;
}

