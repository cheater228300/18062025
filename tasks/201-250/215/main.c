/*Условие задачи 215:
215. Объясните классификацию ошибок: 
синтаксические, ошибки в синтаксисе 
семантические, работает но неверно
логические, работает результат неверный
runtime. падает программа */

#include <stdio.h>
#include <stdlib.h>

// void syntax_error() {
//     int x = 5  // Ошибка: пропущена точка с запятой
//     printf("%d\n", x);
// }

void semantic_error() {
    int x = 5;
    if (x = 10)printf("x равно 10\n");
    
}

int calculate_average(int a, int b) {
    return a + b / 2; 
}

void runtime_error() {
    int arr[3] = {1, 2, 3};
    printf("%d\n", arr[5]);  
}
int main() {
    syntax_error();
    
    semantic_error();
    
    int a = 10, b = 20;
    printf("Неправильное среднее: %d (должно быть 15)\n", calculate_average(a, b));
    
    return 0;
}
