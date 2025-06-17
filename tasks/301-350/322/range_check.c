#include <stdio.h>

#define IN_RANGE(value, min, max) ((value) >= (min) && (value) <= (max))

int main() {
    int tests[] = {-1, 0, 5, 10, 11};
    int min = 0, max = 10;
    int size = sizeof(tests) / sizeof(tests[0]);

    for (int i = 0; i < size; i++) {
        printf("%d is %sin range [%d, %d]\n", tests[i],
               IN_RANGE(tests[i], min, max) ? "" : "not ", min, max);
    }

    return 0;
}