/*
Условие задачи 278:
278. Реализуйте простой набор битовых флагов для управления состоянием программы.
*/

#include <stdio.h>

// Определяем флаги с помощью битов
#define FLAG_VISIBLE   (1 << 0)  // 0b0001
#define FLAG_ENABLED   (1 << 1)  // 0b0010
#define FLAG_SELECTED  (1 << 2)  // 0b0100
#define FLAG_ERROR     (1 << 3)  // 0b1000

int main() {
    unsigned int state = 0;  // Все флаги сброшены

    // Установка флагов
    state |= FLAG_VISIBLE;   // Включаем "видимость"
    state |= FLAG_ENABLED;   // Включаем "доступность"

    // Проверка флага
    if (state & FLAG_VISIBLE)
        printf("Флаг VISIBLE установлен\n");

    if (state & FLAG_ERROR)
        printf("Флаг ERROR установлен\n");
    else
        printf("Флаг ERROR не установлен\n");

    // Сброс флага
    state &= ~FLAG_VISIBLE;

    // Переключение флага SELECTED (вкл/выкл)
    state ^= FLAG_SELECTED;

    // Вывод текущего состояния
    printf("Состояние: 0b");
    for (int i = 3; i >= 0; i--)
        printf("%d", (state >> i) & 1);
    printf("\n");

    return 0;
}

