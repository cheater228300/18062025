/*
Условие задачи 303:
303. Напишите программу, реализующую стек на основе массива.
*/

#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int val) {
    if (top < MAX - 1)
        stack[++top] = val;
}

int pop() {
    if (top >= 0)
        return stack[top--];
    return -1; // стек пуст
}

int main() {
    push(1);
    push(2);
    push(3);

    printf("%d\n", pop());
    printf("%d\n", pop());
    printf("%d\n", pop());
    
    return 0;
}
