// Задача 319Реализуйте функцию, которая проверяет, содержит ли массив хотя бы одно повторяющееся значение. 
#include <stdio.h>
void proverka(int *mass, int size);
int main() {
    int mass[] = {1,2,3,4,5,6,7,8,9,10};
    proverka(mass, 9);
    for (int i = 0; i < 10; i++){
        printf("%d\n", mass[i]);
    }
    
    return 0;
}
void proverka(int *mass, int size){
    int b = 0;
    for (int i = 0; i < size; i++){
        for (int j = i+1; j < size; j++){
            if (mass[i] == mass[j]){
                b++;
            }
        }
    }
    if (b > 0)
        printf("повтор есть!!!\n");
    if (b == 0)
        printf("повторов нет:(\n");
}
