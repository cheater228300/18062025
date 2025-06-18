/*
Условие задачи 120:
120. Откройте файл и запишите в него текст.
*/

#include <stdio.h>

int main() {
    FILE *file = fopen("output.txt", "w");  // Открываем файл для записи (перезапись)

    if (file == NULL) {
        printf("Не удалось открыть файл для записи.\n");
        return 1;
    }

    const char *text = "Привет, это текст, записанный в файл.\n";

    fprintf(file, "%s", text);  // Записываем текст в файл

    fclose(file);  // Закрываем файл

    printf("Текст успешно записан в файл output.txt\n");

    return 0;
}
