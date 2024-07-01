#include <stdio.h>
#include <stdlib.h>

struct node *front = NULL;
struct node *rear = NULL;
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
void enque(int val){
    struct node* p;
    p= (struct node*)malloc(sizeof(struct node));
    if (p==NULL)
    {
        printf("Queue Overflow");
        return;
    }
    insertend(&rear,val);
    
}

int main(){
    
}