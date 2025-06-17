// Выведите размеры типов с помощью sizeof

#include <stdio.h>
#define PRINT_TYPE_SIZE(type) printf("sizeof(" #type ") = %zu bytes\n", sizeof(type))
int main(){
    // Целочисленные 
    PRINT_TYPE_SIZE(char);
    PRINT_TYPE_SIZE(short int);
    PRINT_TYPE_SIZE(int);
    PRINT_TYPE_SIZE(long);
    PRINT_TYPE_SIZE(long long);
    // Вещественные 
    PRINT_TYPE_SIZE(float);
    PRINT_TYPE_SIZE(double);
    PRINT_TYPE_SIZE(long double);

    // Указатели
    PRINT_TYPE_SIZE(void*);
    PRINT_TYPE_SIZE(int*);
    PRINT_TYPE_SIZE(double*);
    return 0;
}
