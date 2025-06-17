#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>

bool is_palindrome(int num) {
    if (num < 0) return false;

    // Find number of digits
    int digits = num == 0 ? 1 : (int)log10(num) + 1;

    // Extract digits into array
    int* arr = (int*)malloc(digits * sizeof(int));
    if (arr == NULL) return false;

    int temp = num;
    for (int i = 0; i < digits; i++) {
        arr[i] = temp % 10;
        temp /= 10;
    }

    // Check palindrome
    bool result = true;
    for (int i = 0; i < digits / 2; i++) {
        if (arr[i] != arr[digits - 1 - i]) {
            result = false;
            break;
        }
    }

    free(arr);
    return result;
}

int main() {
    int tests[] = {12321, 12345, 0, 11, -121};
    int size = sizeof(tests) / sizeof(tests[0]);

    for (int i = 0; i < size; i++) {
        printf("%d is %sa palindrome\n", tests[i], is_palindrome(tests[i]) ? "" : "not ");
    }

    return 0;
}