#include <stdio.h>
#include <stdlib.h>
#define maxsize 100

struct Queue
{
    int front;
    int rear;
    int ar[maxsize];
} qu;

void isempty()
{
    if (qu.front == -1 || qu.front > qu.rear)
    {
        printf("Queue is empty\n");
        return;
    }
}

void isfull()
{
    if (qu.rear == maxsize - 1)
    {
        printf("Queue is full\n");
        return;
    }
}

int dequeue()
{
    if (qu.front == -1 || qu.front > qu.rear)
    {
        printf("Queue is empty\n");
        return -1;
    }
    int x;
    x = qu.ar[qu.front];
    qu.front = qu.front + 1;

    return x;
}

void enqueue()
{
    if (qu.rear == maxsize - 1)
    {
        printf("Queue is full\n");
        return;
    }
    // printf("%d\n",qu.front);
    if (qu.front == -1)
    {
        qu.front = 0;
    }
    // printf("%d\n",qu.front);
    int x;
    printf("Enter the element to insert in queue\n");
    scanf("%d", &x);
    qu.rear = qu.rear + 1;
    qu.ar[qu.rear] = x;
}

void display()
{
    if (qu.front == -1 || qu.front > qu.rear)
    {
        printf("Queue is empty\n");
        return;
    }
    for (int i = qu.front; i <= qu.rear; i++)
    {
        printf("%d ", qu.ar[i]);
    }
    printf("\n");
}

int main()
{
    int choice;
    int option = 1;
    qu.front = -1;
    qu.rear = -1;

    while (option)
    {
        printf("Enter your choice :\n1 to check empty\n2 to check full\n3 to dequeue\n4 to enqueue\n5 for display\n6 for exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            isempty();
            break;
        case 2:
            isfull();
            break;
        case 3:
            printf("Deleted element is %d\n", dequeue());
            break;
        case 4:
            enqueue();
            break;
        case 5:
            display();
            break;
        case 6:
            option = 0;
            break;
        default:
            break;
        }
    }

    return 0;
}

// isEmpty(): To check if the queue is empty
// isFull(): To check whether the queue is full or not
// dequeue(): Removes the element from the frontal side of the queue
// enqueue(): It inserts elements to the end of the queue
// Front: Pointer element responsible for fetching the first element from the queue
// Rear: Pointer element responsible for fetching the last element from the queue