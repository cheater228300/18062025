/*
Условие задачи 305:
305. Напишите программу, сравнивающую производительность malloc и calloc.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10000000

int main() {
    clock_t t;
    int *p;

    t = clock();
    p = malloc(N * sizeof(int));
    for (int i = 0; i < N; i++) p[i] = i;
    free(p);
    printf("malloc: %.3f\n", (double)(clock() - t) / CLOCKS_PER_SEC);

    t = clock();
    p = calloc(N, sizeof(int));
    for (int i = 0; i < N; i++) p[i] = i;
    free(p);
    printf("calloc: %.3f\n", (double)(clock() - t) / CLOCKS_PER_SEC);

    return 0;
}
