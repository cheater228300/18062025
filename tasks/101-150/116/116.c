#include <stdio.h>

int main() {
    double num, sum = 0;
    int count = 0;
    
    printf("Enter positive numbers (negative to stop): ");
    while (1) {
        scanf("%lf", &num);
        if (num < 0) break;
        if (num > 0) {
            sum += num;
            count++;
        }
    }
    
    if (count > 0) {
        printf("Average: %.2f\n", sum / count);
    } else {
        printf("No positive numbers entered.\n");
    }
    
    return 0;
}