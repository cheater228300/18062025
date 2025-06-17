/*
Условие задачи 133:
133. Реализуйте программу, которая шифрует содержимое файла с помощью XOR-шифрования и сохраняет результат в новом файле.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    const char *input_filename = "input.txt";
    const char *output_filename = "output.txt";
    const char key = 0x5A;  // Простой XOR-ключ (можно заменить)

    FILE *in = fopen(input_filename, "rb");
    FILE *out = fopen(output_filename, "wb");

    if (!in || !out) {
        perror("Ошибка при открытии файла");
        return 1;
    }

    int ch;
    while ((ch = fgetc(in)) != EOF) {
        fputc(ch ^ key, out);  // XOR-шифрование
    }

    fclose(in);
    fclose(out);

    printf("Шифрование завершено. Результат в %s\n", output_filename);
    return 0;
}
