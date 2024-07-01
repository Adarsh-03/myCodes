#include <stdio.h>
#include <stdlib.h>

struct node *top = NULL;
struct node
{
    int data;
    struct node *next;
};

struct node *getnode()
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    return p;
}

void insertbeg(int x, struct node **p)
{
    struct node *q;
    q = getnode();
    q->data = x;
    q->next = *p;
    *p = q;
}

// void insertmiddle(int x,struct node** p){
//     struct node* q;
//     q = getnode();
//     q->data = x;

// }

void display(struct node *start)
{
    struct node *p;
    p = start;
    printf("Data of Linked list are : ");
    while (p != NULL)
    {
        printf("%d", p->data);
        p = p->next;
        printf("->");
    }
    printf("\n");
}

void insertend(int x, struct node **start)
{
    struct node *p, *q;
    q = getnode();
    q->data = x;
    q->next = NULL;
    p = *start;
    if (p == NULL)
    {
        *start = q;
    }
    else
    {
        while (p->next != NULL)
        {
            p = p->next;
        }
        q->data = x;
        q->next = NULL;
        p->next = q;
    }
}
// void deleteNode(struct Node **head_ref, int key)
// {
//     struct Node *temp = *head_ref, *prev;

//     if (temp != NULL && temp->data == key)
//     {
//         *head_ref = temp->next;
//         free(temp);
//         return;
//     }
//     // Find the key to be deleted
//     while (temp != NULL && temp->data != key)
//     {
//         prev = temp;
//         temp = temp->next;
//     }

//     // If the key is not present
//     if (temp == NULL)
//         return;

//     // Remove the node
//     prev->next = temp->next;

//     free(temp);
// }

void push(int x)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    if (p == NULL)
    {
        printf("Stack Overflow");
        return;
    }
    insertbeg(x, &top);
}
int pop()
{
    int x;
    if (top == NULL)
    {
        printf("Stack Underflow");
        return -1;
    }
    // x = deletebeg(, &top);
    return x;
}
int main(){
    push(2);
    push(3);
    push(5);
    display(top);
    return 0;
}