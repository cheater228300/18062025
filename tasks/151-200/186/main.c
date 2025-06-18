/*
Условие задачи 186:
186. Реализуйте массив структур Product (название, цена, количество), где каждая структура выделяется динамически.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    double price;
    int quantity;
} Product;

int main() {
    int n;
    printf("Введите количество продуктов: ");
    scanf("%d", &n);

    // Выделяем память под массив из n структур Product
    Product *products = (Product *)malloc(n * sizeof(Product));
    if (products == NULL) {
        printf("Ошибка выделения памяти\n");
        return 1;
    }

    // Ввод данных
    for (int i = 0; i < n; i++) {
        printf("Введите название продукта %d: ", i + 1);
        scanf("%s", products[i].name);
        printf("Введите цену продукта %d: ", i + 1);
        scanf("%lf", &products[i].price);
        printf("Введите количество продукта %d: ", i + 1);
        scanf("%d", &products[i].quantity);
    }

    // Вывод данных
    printf("\nСписок продуктов:\n");
    for (int i = 0; i < n; i++) {
        printf("%s - Цена: %.2f, Кол-во: %d\n", products[i].name, products[i].price, products[i].quantity);
    }

    free(products);  // Освобождаем память
    return 0;
}
