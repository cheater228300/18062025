#include <stdio.h>

int main() {
    unsigned long long num, original;
    printf("Enter a number: ");
    scanf("%llu", &num);
    
    original = num;
    if (num <= 0) {
        printf("%llu is not a power of 2\n", original);
        return 0;
    }
    
    while (num > 1) {
        if (num % 2 != 0) {
            printf("%llu is not a power of 2\n", original);
            return 0;
        }
        num /= 2;
    }
    
    printf("%llu is a power of 2\n", original);
    return 0;
}