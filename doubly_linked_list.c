#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *getnode()
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    return p;
}

void insbeg(struct node** dstart,int val){
    struct node* temp = *dstart;
    struct node* p ;
    p = getnode();
    p->data = val;
    p->prev = NULL;
    p->next = temp;

    if (temp==NULL)
    {
        p->next = NULL;
        temp = p;
    }
    else
    {
        p->next = temp;
        temp->prev = p;
        temp = p;

    }
    
}

void insend(struct node** dstart,int val){
    struct node* p = getnode();
    struct node* temp = *dstart;

    p->data = val;
    p->next = NULL;
    if (dstart == NULL)
    {
        p->prev=NULL;
        temp=p;
    }
    else
    {
        while (temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = p;
        p->prev = temp;
        
    }
    
    
}

void insbefore(struct node** dstart,int val){
    struct node* p =getnode();
    p->data = val;
    if (p->prev!=NULL)
    {
        
    }
    
}

void display(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL");
}

int main(){
    struct node* head;
    insbeg(&head,5);
    insbeg(&head,6);
    insbeg(&head,7);
    insbeg(&head,8);

    display(head);
}