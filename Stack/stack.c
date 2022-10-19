#include <stdio.h>
#include <stdlib.h>

struct Stack
{
    int arr[5];
    int capacity;
    int top;
};

struct Stack s;

void push(int data)
{
    if (s.top == s.capacity - 1)
    {
        printf("Stack is full.");
        exit(1);
    }
    s.top++;
    s.arr[s.top] = data;
    // s.arr[++s.top] = data;
}

int pop()
{
    int del = 0;
    if (s.top == -1)
    {
        printf("Stack is empty.");
        exit(1);
    }
    del = s.arr[s.top];
    s.top--;
    return del;
}

void printStack()
{
    int i = 0;
    printf("Stack:\n");
    for (i = 0; i <= s.top; i++)
    {
        printf("%d ", s.arr[i]);
    }
    printf("\n");
}

int main()
{
    int delValue = 0;
    s.capacity = 5;
    s.top = -1;

    printf("\nPush 10,30,20\n");
    push(10);
    push(30);
    push(20);

    printStack();

    printf("Pop once\n");
    delValue = pop();
    printf("%d is popped\n", delValue);
    printStack();

    return 0;
}