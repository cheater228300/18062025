#include <stdio.h>

struct Struct1 {
    char a;
    int b;
    short c;
};

struct Struct2 {
    int b;
    short c;
    char a;
};

int main() {
    printf("Size of Struct1: %zu bytes\n", sizeof(struct Struct1));
    printf("Size of Struct2: %zu bytes\n", sizeof(struct Struct2));
    return 0;
}