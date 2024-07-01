#include <stdio.h>
#include <stdlib.h>
struct polyNode
{
    int coeff;
    int power;
    struct polyNode *next;
};
struct polyNode *getnode()
{
    struct polyNode *p;
    p = (struct polyNode *)malloc(sizeof(struct polyNode));
    return p;
}
void insend(struct polyNode **START, int x, int y)
{
    struct polyNode *p, *q;
    q = getnode();
    q->power = x;
    q->coeff = y;
    q->next = NULL;

    p = *START;
    if (p == NULL)
    {
        *START = q;
    }
    else
    {
        while (p->next != NULL)
            p = p->next;
        p->next = q;
    }
}
void mergeNodes(struct polyNode *head)
{
    struct polyNode *ptr1, *ptr2, *dup;
    ptr1 = head;

    /* iterate over the nodes*/
    while (ptr1 != NULL && ptr1->next != NULL)
    {
        ptr2 = ptr1;

        /*compare the current node's exponent with the other nodes */
        while (ptr2->next != NULL)
        {
            if (ptr1->power == ptr2->next->power)
            {
                // add the coefficients
                ptr1->coeff = ptr1->coeff + ptr2->next->coeff;
                dup = ptr2->next;
                ptr2->next = ptr2->next->next;

                /* delete this node as its coefficient has been added */
                free(dup);
            }
            else
                ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
    }
}
// Display Linked list
void show(struct polyNode *node)
{
    while (node != NULL)
    {
        printf("%dx^%d", node->coeff, node->power);
        if (node->coeff >= 0)
        {
            if (node->next != NULL)
                printf("+");
        }
        node = node->next;
    }
}

int main(){
    struct polyNode *poly1 = NULL, *poly2 = NULL, *poly = NULL;
    // inserting 1st polynomial
    insend(&poly1, 2, 2);
    insend(&poly1, 1, 1);
    insend(&poly1, 0, 4);

    // // inserting 2nd polynomial    
    // insend(&poly2, 2, 1);
    // insend(&poly2, 1, -3);
    // insend(&poly2, 0, 6);

    printf("1st Polynomial: ");
    show(poly1);
    // printf("\n2nd Polynomial: ");
    // show(poly2);
}