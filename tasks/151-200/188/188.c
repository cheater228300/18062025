#include <stdio.h>
#include <stdbool.h>

struct Date {
    int day;
    int month;
    int year;
};

bool is_valid_date(struct Date d) {
    if (d.year < 1 || d.month < 1 || d.month > 12 || d.day < 1) return false;
    
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if ((d.year % 4 == 0 && d.year % 100 != 0) || (d.year % 400 == 0)) {
        days_in_month[1] = 29;
    }
    
    return d.day <= days_in_month[d.month - 1];
}

int main() {
    struct Date d;
    printf("Enter date (day month year): ");
    scanf("%d %d %d", &d.day, &d.month, &d.year);
    
    if (is_valid_date(d)) {
        printf("%d/%d/%d is a valid date\n", d.day, d.month, d.year);
    } else {
        printf("%d/%d/%d is not a valid date\n", d.day, d.month, d.year);
    }
    
    return 0;
}