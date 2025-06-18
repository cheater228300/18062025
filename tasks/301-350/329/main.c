/*
Условие задачи 329:
Напишите программу, которая реализует циклический буфер (кольцевой 
буфер) с использованием динамического массива. */
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *data;
    int capacity;
    int head;
    int tail;
    int size;
} RingBuffer;

// Создать буфер заданной ёмкости
RingBuffer* create_buffer(int capacity) {
    RingBuffer *rb = malloc(sizeof(RingBuffer));
    rb->data = malloc(capacity * sizeof(int));
    rb->capacity = capacity;
    rb->head = 0;
    rb->tail = 0;
    rb->size = 0;
    return rb;
}

// Освободить буфер
void free_buffer(RingBuffer *rb) {
    free(rb->data);
    free(rb);
}

// Проверка, пуст ли буфер
int is_empty(RingBuffer *rb) {
    return rb->size == 0;
}

// Проверка, полный ли буфер
int is_full(RingBuffer *rb) {
    return rb->size == rb->capacity;
}

// Добавить элемент в буфер
int enqueue(RingBuffer *rb, int val) {
    if (is_full(rb)) return 0; // не хватает места
    rb->data[rb->tail] = val;
    rb->tail = (rb->tail + 1) % rb->capacity;
    rb->size++;
    return 1;
}

// Удалить элемент из буфера
int dequeue(RingBuffer *rb, int *val) {
    if (is_empty(rb)) return 0; // буфер пуст
    *val = rb->data[rb->head];
    rb->head = (rb->head + 1) % rb->capacity;
    rb->size--;
    return 1;
}

int main() {
    RingBuffer *rb = create_buffer(5);

    enqueue(rb, 10);
    enqueue(rb, 20);
    enqueue(rb, 30);

    int val;
    while (dequeue(rb, &val)) {
        printf("%d ", val);
    }
    printf("\n");

    free_buffer(rb);
    return 0;
}
