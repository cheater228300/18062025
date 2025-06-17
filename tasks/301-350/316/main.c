// Задача 316Реализуйте функцию, которая выполняет побитовое объединение 
//нескольких полей данных в одном числе (например, кодирование дня, месяца 
//и года в 32-битное число). 
#include <stdio.h>
#include <stdint.h>

typedef union {
    struct {
        uint32_t day : 5;    // 5 бит для дня (0-31)
        uint32_t month : 4;  // 4 бита для месяца (0-15)
        uint32_t year : 12;  // 12 бит для года (0-4095)
        uint32_t unused : 11; // Оставшиеся биты
    } fields;
    uint32_t packed;
} DatePack;

uint32_t pack_fields(uint8_t day, uint8_t month, uint16_t year) {
    DatePack dp;
    dp.fields.day = day;
    dp.fields.month = month;
    dp.fields.year = year;
    dp.fields.unused = 0;
    return dp.packed;
}

void unpack_fields(uint32_t packed, uint8_t *day, uint8_t *month, uint16_t *year) {
    DatePack dp;
    dp.packed = packed;
    *day = dp.fields.day;
    *month = dp.fields.month;
    *year = dp.fields.year;
}
int main() {
    // Пример использования
    uint8_t day = 15;
    uint8_t month = 6;
    uint16_t year = 2023;
    
    printf("Исходные данные: %02d.%02d.%04d\n", day, month, year);
    
    // Упаковка
    uint32_t packed = pack_fields(day, month, year);
    printf("Упакованное число: 0x%08X (%u)\n", packed, packed);
    
    // Распаковка
    uint8_t unpacked_day, unpacked_month;
    uint16_t unpacked_year;
    unpack_fields(packed, &unpacked_day, &unpacked_month, &unpacked_year);
    printf("Распакованные данные: %02d.%02d.%04d\n", 
           unpacked_day, unpacked_month, unpacked_year);
    
    return 0;
}
