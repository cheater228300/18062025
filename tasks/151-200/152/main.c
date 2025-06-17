/*
Условие задачи 152:
152. Напишите программу, демонстрирующую использование указателей на функции в структуре.
*/

#include <stdio.h>

// Тип для указателя на функцию
typedef int (*MathFunc)(int, int);

// Структура с указателями на функции
struct Calculator {
    MathFunc add;
    MathFunc subtract;
};

// Функции для операций
int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }

int main() {
    // Создаем структуру и инициализируем указатели
    struct Calculator calc = {add, subtract};
    
    int x = 8, y = 3;
    
    // Вызов функций через структуру
    printf("%d + %d = %d\n", x, y, calc.add(x, y));
    printf("%d - %d = %d\n", x, y, calc.subtract(x, y));
    
    return 0;
}
