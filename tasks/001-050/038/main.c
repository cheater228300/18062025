/*
Условие задачи 038:
38. Объясните, как работают NaN и бесконечность в C.
*/

#include <stdio.h>
#include <math.h>

int main() {
    double zero = 0.0;
    double nan = zero / zero;        // NaN
    double inf = 1.0 / zero;         // +inf
    double neg_inf = -1.0 / zero;    // -inf

    printf("NaN: %f\n", nan);
    printf("Inf: %f\n", inf);
    printf("-Inf: %f\n", neg_inf);

    // Проверки
    printf("nan == nan: %d\n", nan == nan);         // 0 (false)
    printf("isnan(nan): %d\n", isnan(nan));         // 1 (true)
    printf("isinf(inf): %d\n", isinf(inf));         // 1 (true)
    printf("isinf(neg_inf): %d\n", isinf(neg_inf)); // 1 (true)

    return 0;
}
