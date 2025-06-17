#include <stdio.h>

int main() {
    int N;
    printf("Enter N: ");
    scanf("%d", &N);
    
    int sum = 0;
    int i = 1;
    int count = 0;
    
    while (count < N) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
            count++;
        }
        i++;
    }
    
    printf("Sum of first %d numbers divisible by 3 or 5: %d\n", N, sum);
    return 0;
}