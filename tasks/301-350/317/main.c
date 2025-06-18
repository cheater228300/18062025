// Задача 317Напишите программу, которая реализует циклический буфер (кольцевой буфер) с использованием динамического массива.
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    int *buffer;     // Динамический массив для хранения данных
    int capacity;    // Общая емкость буфера
    int size;        // Текущее количество элементов
    int head;        // Индекс начала (для извлечения)
    int tail;        // Индекс конца (для добавления)
} CircularBuffer;

// Инициализация буфера
CircularBuffer* cb_init(int capacity) {
    CircularBuffer *cb = (CircularBuffer*)malloc(sizeof(CircularBuffer));
    if (!cb) return NULL;
    
    cb->buffer = (int*)malloc(capacity * sizeof(int));
    if (!cb->buffer) {
        free(cb);
        return NULL;
    }
    
    cb->capacity = capacity;
    cb->size = 0;
    cb->head = 0;
    cb->tail = 0;
    return cb;
}

// Освобождение памяти
void cb_free(CircularBuffer *cb) {
    if (cb) {
        free(cb->buffer);
        free(cb);
    }
}

// Проверка на пустоту
bool cb_is_empty(const CircularBuffer *cb) {
    return cb->size == 0;
}

// Проверка на заполненность
bool cb_is_full(const CircularBuffer *cb) {
    return cb->size == cb->capacity;
}

// Добавление элемента
bool cb_enqueue(CircularBuffer *cb, int item) {
    if (cb_is_full(cb)) {
        return false; // Переполнение
    }
    
    cb->buffer[cb->tail] = item;
    cb->tail = (cb->tail + 1) % cb->capacity;
    cb->size++;
    return true;
}

// Извлечение элемента
bool cb_dequeue(CircularBuffer *cb, int *item) {
    if (cb_is_empty(cb)) {
        return false; // Буфер пуст
    }
    
    *item = cb->buffer[cb->head];
    cb->head = (cb->head + 1) % cb->capacity;
    cb->size--;
    return true;
}

// Просмотр элемента в голове без извлечения
bool cb_peek(const CircularBuffer *cb, int *item) {
    if (cb_is_empty(cb)) {
        return false;
    }
    
    *item = cb->buffer[cb->head];
    return true;
}

// Вывод содержимого буфера
void cb_print(const CircularBuffer *cb) {
    printf("Circular Buffer [size=%d/%d]: ", cb->size, cb->capacity);
    
    if (cb_is_empty(cb)) {
        printf("empty\n");
        return;
    }
    
    int index = cb->head;
    for (int i = 0; i < cb->size; i++) {
        printf("%d ", cb->buffer[index]);
        index = (index + 1) % cb->capacity;
    }
    printf("\n");
}

int main() {
    // Создаем буфер емкостью 5
    CircularBuffer *cb = cb_init(5);
    if (!cb) {
        printf("Ошибка создания буфера\n");
        return 1;
    }
    
    // Тестируем операции
    cb_print(cb); // Пустой
    
    for (int i = 1; i <= 5; i++) {
        cb_enqueue(cb, i*10);
        printf("Добавлено: %d\n", i*10);
        cb_print(cb);
    }
    
    // Попытка добавить в полный буфер
    if (!cb_enqueue(cb, 60)) {
        printf("Буфер полон, не удалось добавить 60\n");
    }
    
    // Извлекаем элементы
    int item;
    while (cb_dequeue(cb, &item)) {
        printf("Извлечено: %d\n", item);
        cb_print(cb);
    }
    
    // Попытка извлечь из пустого буфера
    if (!cb_dequeue(cb, &item)) {
        printf("Буфер пуст, извлечение невозможно\n");
    }
    
    // Освобождаем память
    cb_free(cb);
    return 0;
}

/*#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *data;
    int size, start, count;
} RingBuffer;

void init(RingBuffer *rb, int size) {
    rb->data = malloc(size * sizeof(int));
    rb->size = size;
    rb->start = 0;
    rb->count = 0;
}

void freeBuffer(RingBuffer *rb) {
    free(rb->data);
}

int enqueue(RingBuffer *rb, int val) {
    if (rb->count == rb->size) return 0; // полный
    int end = (rb->start + rb->count) % rb->size;
    rb->data[end] = val;
    rb->count++;
    return 1;
}

int dequeue(RingBuffer *rb, int *val) {
    if (rb->count == 0) return 0; // пустой
    *val = rb->data[rb->start];
    rb->start = (rb->start + 1) % rb->size;
    rb->count--;
    return 1;
}

int main() {
    RingBuffer rb;
    init(&rb, 5);

    enqueue(&rb, 10);
    enqueue(&rb, 20);
    enqueue(&rb, 30);

    int v;
    while (dequeue(&rb, &v)) {
        printf("%d ", v);
    }

    freeBuffer(&rb);
    return 0;
}*/
