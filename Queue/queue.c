#include <stdio.h>
#include <stdlib.h>

struct Queue
{
    int arr[5];
    int front;
    int rear;
};

struct Queue queue;

void enQueue(int data)
{
    if (queue.rear == 4)
    {
        printf("\nQueue is full\n");
        exit(0);
    }
    if (queue.front == -1)
        queue.front = 0;

    queue.rear++;
    queue.arr[queue.rear] = data;
}

int deQueue()
{
    int delValue = 0;
    if (queue.front == -1)
    {
        printf("\nQueue is empty\n");
        exit(0);
    }
    delValue = queue.arr[queue.front];

    if (queue.front >= queue.rear)
    {
        queue.front = -1;
        queue.rear = -1;
    }
    else
        queue.front++;
    return delValue;
}

void printQueue()
{
    int i = 0;
    printf("\nFront= %d\n", queue.front);
    for (i = queue.front; i <= queue.rear; i++)
    {
        printf("%d ", queue.arr[i]);
    }
    printf("\nRear= %d\n", queue.rear);
}

int main()
{
    queue.front = -1;
    queue.rear = -1;

    enQueue(10);
    enQueue(43);
    enQueue(33);
    enQueue(76);
    enQueue(21);

    printQueue();

    deQueue();

    printQueue();

    return 0;
}