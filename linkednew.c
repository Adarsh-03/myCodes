#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void insbeg(struct Node **start, int x)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));

    temp->data = x;
    temp->next = *start;

    *start = temp;
}

void insmid(struct Node *prev, int x)
{
    if (prev->next == NULL)
    {
        printf("The given previous node cannot be NULL");
        return;
    }
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));

    temp->data = x;
    temp->next = prev->next;
    prev->next = temp;
}

void insend(struct Node **start, int x)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    struct Node *last = *start;

    temp->data = x;
    temp->next = NULL;

    if (*start == NULL)
    {
        *start = temp;
        return;
    }

    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = temp;
    return;
}

void deleteNode(struct Node **start, int key)
{
    struct Node *temp = *start, *prev;

    if (temp != NULL && temp->data == key)
    {
        *start = temp->next;
        free(temp);
        return;
    }
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
    {
        return;
    }

    prev->next = temp->next;
    free(temp);
}

int searchNode(struct Node **start, int key)
{
  struct Node *current = *start;

  while (current != NULL)
  {
    if (current->data == key)
      return 1;
    current = current->next;
  }
  return 0;
}

// Sort the linked list
void sortLinkedList(struct Node **start)
{
  struct Node *current = *start, *index = NULL;
  int temp;

  if (start == NULL)
  {
    return;
  }
  else
  {
    while (current != NULL)
    {
      // index points to the node next to current
      index = current->next;

      while (index != NULL)
      {
        if (current->data > index->data)
        {
          temp = current->data;
          current->data = index->data;
          index->data = temp;
        }
        index = index->next;
      }
      current = current->next;
    }
  }
}

void printList(struct Node *node)
{
  while (node != NULL)
  {
    printf(" %d ", node->data);
    if (node->next!=NULL)
    {
        printf("->");
    }
    node = node->next;
    }
}

int main(){
    struct Node *head = NULL;

    insend(&head,1);
    insend(&head,2);
    insend(&head,3);
    printf("Linked list: ");
    printList(head);
}