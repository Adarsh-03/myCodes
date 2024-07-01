#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

void insbeg(struct node** head,int val){
    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = *head;
    *head  = newnode;
    
    
}

void insend(struct node** head,int val){
    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = NULL;

    if (*head == NULL)
    {
        *head = newnode;
    }
    
    else
    {
        struct node* temp = *head;
        while (temp->next!= NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->next = NULL;
        
    }
    
}
int countnodes(struct node* head){
    int count=0;
    struct node * temp = head;
    while (temp!=NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
    
}
void display(struct node* head){
    struct node* temp = head;
    printf("The entered linked list is :\n");
    while (temp!=NULL)
    {
        printf("%d->",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
    
}

int deleteNode(struct node** head,int val){
    struct node * temp = *head;
    struct node *del ;
    if ((*head)->data==val)
    {
        del = *head;
        *head = (*head)->next;
        free(del);
    }
    else
    {
        while (temp->next!=NULL)
        {
            if (temp->next->data==val)
            {
                del = temp->next;
                temp->next = temp->next->next;
                free(del);
                break;
            }
            else{
                temp = temp->next;
            }
            
        }
    }
    
}
void search(){
    
}
int main(){
    struct node* head = NULL;
    // insbeg(&head,1);
    // insbeg(&head,2);
    // insbeg(&head,3);
    // insbeg(&head,4);
    // display(head);
    insend(&head,1);
    insend(&head,2);
    insend(&head,3);
    insend(&head,4);
    int ans = countnodes(head);
    // deleteNode(&head,3);
    printf("\nNumber of Nodes %d\n",ans);
    display(head);
    return 0;
}

// Traversal - access each element of the linked list.
// Insertion - adds a new element to the linked list.
// Deletion - removes the existing elements.
// Search - find a node in the linked list.
// Sort - sort the nodes of the linked list.