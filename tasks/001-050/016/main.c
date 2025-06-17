/*
Условие задачи 016:
16. Приведите типы в выражении int + float.
*/

#include <stdio.h>

int main() {
    int a = 5;
    float b = 3.14f;
    float result = a + b;  // int автоматически приводится к float
    
    printf("Результат: %.2f\n", result);  // Выведет 8.14
    return 0;
}
