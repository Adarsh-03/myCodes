#include <stdio.h>
#include <stdlib.h>

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

void insBeg(struct node **head, int val)
{
    struct node *q;
    q = getnode();
    q->data = val;
    q->next = *head;
    *head = q;
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

void insEnd(struct node **head, int val)
{
    struct node *newnode, *temp;
    newnode = getnode();
    newnode->data = val;
    newnode->next = NULL;

    // struct node* ;
    temp = *head;

    if (temp == NULL)
        *head = newnode;

    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}
void reverse(struct node **head)
{

    struct node *prevptr = NULL;
    struct node *currptr = *head;
    struct node *nextptr;

    while (currptr != NULL)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
    }

    *head = prevptr; // returns the head of new reversed linked list i.e.last node of original linked list
}

void Delbeg(struct node **head)
{

    struct node *temp = *head;
    *head = temp->next;
    free(temp);
}

void Delend(struct node **head)
{
    struct node *temp = *head, *prev;
    if (temp->next == NULL)
    {
        free(temp);
        return;
    }

    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }
    free(temp);
    prev->next = NULL;
}

// int length(struct node* head){
//     int count=0;
//     struct node* temp=head;
//     while(temp!=NULL){
//         count++;
//         temp=temp->next;
//     }
//     return count;
// }

int length(struct node *head)
{
    int l = 0;
    while (head != NULL)
    {
        l++;
        head = head->next;
    }
    return l;
}

void addLarge(struct node *head1, struct node *head2)
{
    struct node *p, *q, *newList = NULL;
    int carry, data;
    reverse(&head1);
    reverse(&head2);
    p = head1;
    q = head2;
    while (p != NULL)
    {
        data = (p->data + q->data + carry);
        carry = (p->data + q->data + carry);
        p = p->next;
        q = q->next;
        insEnd(&newList, data);
    }
    reverse(&newList);
    display(newList);
}

struct node *reverseKnodes(struct node *head, int k)
{
    struct node *prev = NULL, *curr = head, *next;
    int count = 0;
    while (curr != NULL && count < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    if (curr != NULL)
    {
        head->next = reverseKnodes(curr, k);
    }

    return prev;
}
// fast and slow method

int middle(struct node* head){
    struct node* fast=head,*slow=head;
    while(fast->next && fast->next->next){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow->data;
}

// int middle(struct node *head)
// {
//     int l = length(head);
//     int ans = l / 2, cnt = 0;

//     while (cnt < ans)
//     {
//         head = head->next;
//         cnt++;
//     }
//     return head->data;
// }

int main()
{
    struct node *head = NULL;
    int n, a;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        insEnd(&head, a);
    }
    // reverse(&head);
    display(head);

    // Delbeg(&head);
    // display(head);

    // Delend(&head);
    // display(head);

    printf("\n%d", length(head));
    // struct node* newhead=reverseKnodes(head,2);
    // display(newhead);
    printf("\n%d", middle(head));
}