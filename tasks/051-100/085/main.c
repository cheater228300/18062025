/*
Условие задачи 085:
85. Реализуйте простое меню с выбором действия (1 — сложение, 2 — вычитание, 3 — умножение, 4 — деление). Выполните выбранную операцию над двумя числами, используя switch. Обработайте случай неверного ввода.
*/

#include <stdio.h>
#include <stdlib.h> // для exit()

void showMenu() {
    printf("\n=== Калькулятор ===\n");
    printf("1. Сложение\n");
    printf("2. Вычитание\n");
    printf("3. Умножение\n");
    printf("4. Деление\n");
    printf("0. Выход\n");
    printf("Выберите операцию: ");
}

int main() {
    int choice;
    double a, b;
    
    while (1) {
        showMenu();
        scanf("%d", &choice);
        
        if (choice == 0) {
            printf("Выход из программы.\n");
            exit(0);
        }
        
        if (choice < 1 || choice > 4) {
            printf("Ошибка: неверный выбор!\n");
            continue;
        }
        
        printf("Введите два числа: ");
        scanf("%lf %lf", &a, &b);
        
        switch (choice) {
            case 1:
                printf("Результат: %.2f\n", a + b);
                break;
            case 2:
                printf("Результат: %.2f\n", a - b);
                break;
            case 3:
                printf("Результат: %.2f\n", a * b);
                break;
            case 4:
                if (b == 0) {
                    printf("Ошибка: деление на ноль!\n");
                } else {
                    printf("Результат: %.2f\n", a / b);
                }
                break;
        }
    }
    
    return 0;
}
