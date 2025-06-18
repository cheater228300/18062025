/*
Условие задачи 240:
240. Напишите программу, которая создаёт очередь (FIFO) с использованием динамического массива и реализует операции добавления и удаления элементов.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *data;
    int capacity;
    int front;    // индекс первого элемента
    int rear;     // индекс следующего места для вставки
    int size;     // текущее количество элементов
} Queue;

// Создание очереди с заданной ёмкостью
Queue* create_queue(int capacity) {
    Queue *q = malloc(sizeof(Queue));
    q->data = malloc(capacity * sizeof(int));
    q->capacity = capacity;
    q->front = 0;
    q->rear = 0;
    q->size = 0;
    return q;
}

// Освободить память очереди
void free_queue(Queue *q) {
    free(q->data);
    free(q);
}

// Проверка, пуста ли очередь
int is_empty(Queue *q) {
    return q->size == 0;
}

// Проверка, полна ли очередь
int is_full(Queue *q) {
    return q->size == q->capacity;
}

// Добавление элемента в очередь
int enqueue(Queue *q, int val) {
    if (is_full(q)) return 0; // очередь полна
    q->data[q->rear] = val;
    q->rear = (q->rear + 1) % q->capacity;
    q->size++;
    return 1;
}

// Удаление элемента из очереди
int dequeue(Queue *q, int *val) {
    if (is_empty(q)) return 0; // очередь пуста
    *val = q->data[q->front];
    q->front = (q->front + 1) % q->capacity;
    q->size--;
    return 1;
}

int main() {
    Queue *q = create_queue(5);

    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);

    int val;
    while (dequeue(q, &val)) {
        printf("%d ", val);
    }
    printf("\n");

    free_queue(q);
    return 0;
}
