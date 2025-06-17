// Создайте перечисление (enum) для дней недели.
// Решение: в enum можно присвоить значения константам
#include <stdio.h>
enum Days {
    Monday=1,   // так Понедельник- 1 день недели
    Tuesday,    //-2 дальше указывать не обязательно
    Wednesday,  //-3 
    Thursday,   //-4
    Friday,     //-5
    Suturday,   //-6
    Sunday      //-7
};  // MT WTF SS
int main(){
    enum Days today = Friday;
    // можно использовать switch для вывода названия дней
    printf("Сегодня %d день недели\n",today);
    return 0;
}
