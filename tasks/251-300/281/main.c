/*
Условие задачи 281:
281. Напишите программу, которая определяет, является ли число степенью двойки, используя битовые операции.
*/

#include <stdio.h>

int is_power_of_two(unsigned int n) {
    return n != 0 && (n & (n - 1)) == 0;
}

int main() {
    unsigned int number;
    printf("Введите число: ");
    scanf("%u", &number);

    if (is_power_of_two(number)) {
        printf("%u — это степень двойки.\n", number);
    } else {
        printf("%u — не является степенью двойки.\n", number);
    }

    return 0;
}
