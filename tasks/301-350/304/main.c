/*
Условие задачи 304:
304. Реализуйте очередь на основе связного списка.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node *front = NULL, *rear = NULL;

void enqueue(int val) {
    Node *n = malloc(sizeof(Node));
    if (!n) return;
    n->data = val; n->next = NULL;
    if (!rear) front = rear = n;
    else { rear->next = n; rear = n; }
}

int dequeue() {
    if (!front) return -1;
    Node *t = front;
    int v = t->data;
    front = front->next;
    if (!front) rear = NULL;
    free(t);
    return v;
}

int main() {
    enqueue(1);
    enqueue(2);
    printf("%d\n", dequeue());
    printf("%d\n", dequeue());
    printf("%d\n", dequeue()); // -1, пусто
}
