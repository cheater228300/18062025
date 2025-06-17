// 35. Используйте union для просмотра внутреннего представления числа
#include <stdio.h>

#include <stdio.h>

typedef union{
    int value;
    unsigned char bytes[4];
}intView;
void print_bits(unsigned char byte){
    for (int i =7;i>=0;i--){
        printf("%d",(byte>>i)&1);
    }
}
int main(){
    intView u;
    u.value=-3; 
    for (int i=4;i>=0;i--){
        print_bits(u.bytes[i]);
        printf("\n");
    }

    return 0;
}
