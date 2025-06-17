#include <stdio.h>
#include "lib.h"

int main() {
    if (add(2, 3) != 5) {
        printf("Test failed: add(2, 3) != 5\n");
        return 1;
    }
    if (multiply(2, 3) != 6) {
        printf("Test failed: multiply(2, 3) != 6\n");
        return 1;
    }
    printf("All tests passed!\n");
    return 0;
}