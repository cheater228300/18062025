/*
Условие задачи 178:
178. Создайте перечисление для месяцев года и используйте его в коде.
*/

#include <stdio.h>

enum Month {
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

int main() {
    enum Month currentMonth = October;

    printf("Текущий месяц номер: %d\n", currentMonth);

    if (currentMonth == December || currentMonth == January || currentMonth == February) {
        printf("Сейчас зима.\n");
    } else if (currentMonth >= March && currentMonth <= May) {
        printf("Сейчас весна.\n");
    } else if (currentMonth >= June && currentMonth <= August) {
        printf("Сейчас лето.\n");
    } else {
        printf("Сейчас осень.\n");
    }

    return 0;
}
