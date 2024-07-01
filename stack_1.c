#include <stdio.h>
#include <stdlib.h>
#define maxsize 10

struct stack
{
    int top;
    int data[maxsize];
} s;

void initialize()
{
    s.top = -1;
}
int emptiness()
{
    if (s.top == -1)
    {
        return 1;
    }
    else
        return 0;
}

int fullness()
{
    if (s.top == maxsize - 1)
    {
        return 1;
    }
    else
        return 0;
}
int push(int x)
{
    if (fullness())
    {
        return -1;
    }

    else
    {
        s.top = s.top + 1;
        s.data[s.top] = x;
        return 1;
    }
}

int pop()
{
    int x;
    if (emptiness())
    {
        return -1;
    }

    else
    {
        x = s.data[s.top];
        s.top--;
        return x;
    }
}
int peek()
{
    if (emptiness())
    {
        return -1;
    }

    return s.data[s.top];
}

int main()
{
    int c, x, n;
    while (1)
    {
        printf("Enter your choice : \n1-initialize \n2-emptiness\n3-fullness\n4-push\n5-pop\n6-peek\n7-Exit the program\n");
        scanf("%d", &c);

        switch (c)
        {
        case 1:
            initialize();
            break;
        case 2:
            n = emptiness();
            if (n == 1)
            {
                printf("Stack is empty\n");
            }
            else if (n == maxsize - 1)
                printf("Stack is full\n");
            else if (n == 1)
            {
                printf("Stack is empty\n");
            }
            else
                printf("Stack is not empty\n");
            break;

        case 3:
            n = fullness();
            if (n == 0)
            {
                printf("Stack is empty\n");
            }
            else
                printf("Stack is full\n");
            break;

        case 4:
            printf("Enter the data to be pushed\n");
            scanf("%d", &x);
            int i = push(x);
            if (i == -1)
            {
                printf("Stack is full\n");
            }
            else
                printf("Item pushed successfully\n");

            break;

        case 5:
            n = pop();
            if (n == -1)
            {
                printf("Stack is empty\n");
            }
            else
                printf("Poped item is %d\n", n);

            break;

        case 6:
            n = peek();
            if (n == -1)
            {
                printf("Stack is empty\n");
            }
            else
                printf("Element at peek is %d\n", n);

            break;

        case 7:
            printf("Exited Successfully\n");
            exit(0);
            break;

        default:
            printf("Enter the valid choice\n");
            break;
        }
    }

    return 0;
}



