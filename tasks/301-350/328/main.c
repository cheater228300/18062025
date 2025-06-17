/*
Условие задачи 328:
328. Реализуйте функцию, которая выполняет побитовое объединение нескольких полей данных в одном числе (например, кодирование дня, месяца и года в 32-битное число).
*/

#include <stdio.h>

// Функция для кодирования даты в 32-битное число
unsigned int encodeDate(unsigned int day, unsigned int month, unsigned int year)
{
    // Проверка корректности данных
    if (day > 31 || month > 12 || year > 9999)
    {
        printf("Некорректные данные\n");
        return 0;
    }

    // Кодирование:
    // День - 5 бит (0-31)
    // Месяц - 4 бита (0-15)
    // Год - остальные биты (до 9999)
    unsigned int encoded = 0;
    encoded |= (day & 0x1F);         // 5 бит для дня
    encoded |= (month & 0x0F) << 5;  // 4 бита для месяца, сдвинутые на 5
    encoded |= (year & 0xFFFF) << 9; // 16 бит для года, сдвинутые на 9

    return encoded;
}

// Функция для декодирования даты
void decodeDate(unsigned int encoded, unsigned int *day, unsigned int *month, unsigned int *year)
{
    *day = encoded & 0x1F;           // Маска для дня (первые 5 бит)
    *month = (encoded >> 5) & 0x0F;  // Маска для месяца (следующие 4 бита)
    *year = (encoded >> 9) & 0xFFFF; // Маска для года (оставшиеся биты)
}

int main()
{
    unsigned int day, month, year;

    printf("Введите день (1-31): ");
    scanf("%u", &day);

    printf("Введите месяц (1-12): ");
    scanf("%u", &month);

    printf("Введите год (0-9999): ");
    scanf("%u", &year);

    unsigned int encoded = encodeDate(day, month, year);
    printf("Закодированная дата: %u\n", encoded);

    unsigned int decodedDay, decodedMonth, decodedYear;
    decodeDate(encoded, &decodedDay, &decodedMonth, &decodedYear);
    printf("Раскодированная дата: %u.%u.%u\n", decodedDay, decodedMonth, decodedYear);

    return 0;
}
