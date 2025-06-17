// Примените typedef к перечислению.

#include <stdio.h>
typedef enum {
    Monday=1,   // так Понедельник- 1 день недели
    Tuesday,    //-2 дальше указывать не обязательно
    Wednesday,  //-3 
    Thursday,   //-4
    Friday,     //-5
    Suturday,   //-6
    Sunday      //-7
}Days;  // MT WTF SS
int main(){
    Days today = Friday;
    // можно использовать switch для вывода названия дней
    printf("Сегодня %d день недели\n",today);
    return 0;
}
