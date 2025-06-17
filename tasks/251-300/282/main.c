/*
Условие задачи 282:
282. Реализуйте функцию, которая меняет местами N-й и M-й биты числа.
*/

#include <stdio.h>

// Функция меняет местами N-й и M-й биты в числе n
unsigned int swap_bits(unsigned int n, int m, int k) {
    // Получаем значения битов на позициях m и k
    int bit_m = (n >> m) & 1;
    int bit_k = (n >> k) & 1;

    // Если биты равны — ничего менять не нужно
    if (bit_m == bit_k)
        return n;

    // Иначе инвертируем оба бита
    n ^= (1U << m);
    n ^= (1U << k);

    return n;
}

int main() {
    unsigned int number;
    int m, k;

    printf("Введите число: ");
    scanf("%u", &number);
    printf("Введите позиции битов (например, 1 и 3): ");
    scanf("%d %d", &m, &k);

    unsigned int result = swap_bits(number, m, k);
    printf("Результат: %u\n", result);

    return 0;
}
