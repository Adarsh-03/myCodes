#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void insbeg(struct Node **cstart, int item)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = *cstart;
    temp->data = item;

    if (p != NULL)
    {
        temp->next = p->next;
        p->next = temp;
    }
    else
    {
        temp->next = temp;
        *cstart = temp;
    }
}

void insend(struct Node **cstart, int item)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = *cstart;
    temp->data = item;

    if (p != NULL)
    {
        temp->next = p->next;
        p->next = temp;
        *cstart = temp;
    }
    else
    {
        temp->next = temp;
        *cstart = temp;
    }
    
}

int deleteBeg(struct Node **cstart){
    struct Node* temp = *cstart;
    struct Node* p = temp->next;
    int x=0;
    if (temp==NULL)
    {
        printf("Void Deletion");
    }
    else if (temp->next==temp)
    {
        return temp->data;
    }
    
    else{
    temp->next=p->next;
    x = p->data;
    free(p);
    }
    
    return x;
}

int deleteEnd(struct Node** cstart){
    struct Node* temp = *cstart;
    struct Node* p= temp->next;
    int x=0;

    if (temp==NULL)
    {
        printf("Void Deletion");
    }
    else if (temp->next==temp)
    {
        x = temp->data;
        cstart = NULL;
        free(cstart);
    }
    else
    {
        while (p->next!=temp)
        {
            p = p->next;
        }
        p->next = temp->next;
        x = temp->data;
        *cstart =p;
        free(temp);
    }
    
    return x;

}

void printList(struct Node *cstart)
{
  struct Node* temp = cstart;
 
    // If linked list is not empty
    if (cstart != NULL) {
 
        // Print nodes till we reach first node again
        do {
            printf("%d ",temp->data);
            temp = temp->next;
        } while (temp != cstart);
    }
    printf("\n");
}

int main(){
    struct Node *start = NULL;

    // insbeg(&start,1);
    // insbeg(&start,2);
    // insbeg(&start,4);
    // insbeg(&start,5);
    // insbeg(&start,3);
    // printf("Linked list 1 : ");
    insend(&start,6);
    insend(&start,7);
    insend(&start,8);
    insend(&start,9);
    insend(&start,10);
    printf("Linked list 2 : ");
    printList(start);
    // printf("%d\n",deleteBeg(&start));
    printf("%d\n",deleteEnd(&start));
    printf("Linked list 2 : ");
    printList(start);
}