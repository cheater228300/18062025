/*
Условие задачи 205:
205. Реализуйте простой калькулятор с меню, используя указатели на функции для операций сложения, вычитания, умножения и деления.
*/

#include <stdio.h>

typedef double (*operation_t)(double, double);

double add(double a, double b) {
    return a + b;
}
double subtract(double a, double b) {
    return a - b;
}
double multiply(double a, double b) {
    return a * b;
}
double divide(double a, double b) {
    if (b == 0) {
        printf("Ошибка: деление на ноль!\n");
        return 0; // или можно обработать иначе
    }
    return a / b;
}

int main() {
    operation_t ops[] = {add, subtract, multiply, divide};
    char *names[] = {"Сложение", "Вычитание", "Умножение", "Деление"};
    int choice;
    double x, y, result;

    while (1) {
        printf("\nКалькулятор:\n");
        for (int i = 0; i < 4; i++) {
            printf("%d. %s\n", i + 1, names[i]);
        }
        printf("0. Выход\n");
        printf("Выберите операцию: ");
        if (scanf("%d", &choice) != 1) break;

        if (choice == 0) {
            printf("Выход.\n");
            break;
        }
        if (choice < 1 || choice > 4) {
            printf("Неверный выбор.\n");
            continue;
        }

        printf("Введите два числа через пробел: ");
        if (scanf("%lf %lf", &x, &y) != 2) {
            printf("Неверный ввод.\n");
            break;
        }

        result = ops[choice - 1](x, y);
        printf("Результат: %.2lf\n", result);
    }

    return 0;
}

