#include <stdio.h>

int main() {
    int power = 1;
    int result = 2;
    printf("Powers of 2:\n");
    printf("n    2^n\n");
    printf("--------\n");
    while (result <= 1000) {
        printf("%d    %d\n", power, result);
        power++;
        result *= 2;
    }
    return 0;
}