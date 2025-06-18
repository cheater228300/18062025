/*
Условие задачи 188:
188. Реализуйте структуру Date, содержащую день, месяц, год, и функцию, проверяющую корректность даты.
*/

#include <stdio.h>
#include <stdbool.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;

// Проверка високосного года
bool isLeapYear(int year) {
    return (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0));
}

// Проверка корректности даты
bool isValidDate(Date d) {
    if (d.year < 1)
        return false;

    if (d.month < 1 || d.month > 12)
        return false;

    if (d.day < 1)
        return false;

    int daysInMonth;

    switch (d.month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            daysInMonth = 31; break;
        case 4: case 6: case 9: case 11:
            daysInMonth = 30; break;
        case 2:
            daysInMonth = isLeapYear(d.year) ? 29 : 28; break;
        default:
            return false;
    }

    return d.day <= daysInMonth;
}

int main() {
    Date date = {29, 2, 2024};

    if (isValidDate(date))
        printf("Дата %02d.%02d.%d корректна\n", date.day, date.month, date.year);
    else
        printf("Дата %02d.%02d.%d некорректна\n", date.day, date.month, date.year);

    return 0;
}
