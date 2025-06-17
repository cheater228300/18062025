#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Product {
    char name[50];
    double price;
    int quantity;
};

int main() {
    int n;
    printf("Enter number of products: ");
    scanf("%d", &n);
    getchar();
    
    struct Product *products = (struct Product *)malloc(n * sizeof(struct Product));
    if (products == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    for (int i = 0; i < n; i++) {
        printf("Enter name for product %d: ", i + 1);
        fgets(products[i].name, sizeof(products[i].name), stdin);
        products[i].name[strcspn(products[i].name, "\n")] = '\0';
        printf("Enter price: ");
        scanf("%lf", &products[i].price);
        printf("Enter quantity: ");
        scanf("%d", &products[i].quantity);
        getchar();
    }
    
    printf("\nProducts:\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s, Price: %.2f, Quantity: %d\n", 
               products[i].name, products[i].price, products[i].quantity);
    }
    
    free(products);
    return 0;
}