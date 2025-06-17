/*
Условие задачи 276:
276. Используйте битовые поля для хранения состояния нескольких флагов.
*/

#include <stdio.h>

// Определение структуры с битовыми полями
struct StatusFlags {
    unsigned int is_visible : 1;
    unsigned int is_enabled : 1;
    unsigned int is_selected : 1;
    unsigned int is_error : 1;
};

int main() {
    struct StatusFlags flags = {0}; // Все флаги сброшены (0)

    // Установка флагов
    flags.is_visible = 1;
    flags.is_enabled = 1;

    // Вывод текущего состояния
    printf("Видимый: %d\n", flags.is_visible);
    printf("Доступен: %d\n", flags.is_enabled);
    printf("Выбран: %d\n", flags.is_selected);
    printf("Ошибка: %d\n", flags.is_error);

    // Сброс флага и установка другого
    flags.is_enabled = 0;
    flags.is_selected = 1;

    // Обновлённое состояние
    printf("\nПосле изменений:\n");
    printf("Видимый: %d\n", flags.is_visible);
    printf("Доступен: %d\n", flags.is_enabled);
    printf("Выбран: %d\n", flags.is_selected);
    printf("Ошибка: %d\n", flags.is_error);

    return 0;
}
