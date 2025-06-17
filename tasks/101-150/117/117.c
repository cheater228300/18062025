#include <stdio.h>

int main() {
    int N;
    printf("Enter N: ");
    scanf("%d", &N);
    
    printf("Perfect numbers from 2 to %d:\n", N);
    for (int i = 2; i <= N; i++) {
        int sum = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                sum += j;
                if (j * j != i) {
                    sum += i / j;
                }
            }
        }
        if (sum == i) {
            printf("%d\n", i);
        }
    }
    
    return 0;
}