/*
Условие задачи 199:
199. Напишите макрос CONTAINER_OF(ptr, type, member), возвращающий указатель на структуру по адресу одного из её полей.
*/

#include <stdio.h>
#include <stddef.h>

#define CONTAINER_OF(ptr, type, member) ((type *)((char *)(ptr) - offsetof(type, member))) // Получение структуры по полю

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node node = {42, NULL};
    int *pdata = &node.data;
    struct Node *pnode = CONTAINER_OF(pdata, struct Node, data); // Восстанавливаем указатель на Node
    printf("Data: %d\n", pnode->data);                           // Должно вывести 42
    return 0;
}
