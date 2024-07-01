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
struct polyNode *multiply(struct polyNode *poly1, struct polyNode *poly2)
{
    int coeff, power;
    struct polyNode *poly3 = NULL, *ptr1, *ptr2;
    ptr1 = poly1;
    ptr2 = poly2;
    while (ptr1 != NULL)
    {
        while (ptr2 != NULL)
        {
            coeff = ptr1->coeff * ptr2->coeff;
            power = ptr1->power + ptr2->power;
            // Invoke addnode function to create
            // a newnode by passing three parameters
            insend(&poly3, power, coeff);
            // move the pointer of 2nd polynomial
            // two get its next term
            ptr2 = ptr2->next;
        }
        // Move the 2nd pointer to the
        // starting point of 2nd polynomial
        ptr2 = poly2;
        // move the pointer of 1st polynomial
        ptr1 = ptr1->next;
    }

    // this function will be invoke to add
    // the coefficient of the elements
    // having same power from the resultant linked list
    mergeNodes(poly3);
    return poly3;
}
// Driver code
int main()
{
    struct polyNode *poly1 = NULL, *poly2 = NULL, *poly = NULL;

    // Create first list of 5x^2 + 4x^1 + 2x^0
    insend(&poly1, 2, 5);
    insend(&poly1, 1, 4);
    insend(&poly1, 0, 2);
    // Create second list of -5x^1 - 5x^0
    insend(&poly2, 1, -5);
    insend(&poly2, 0, -5);

    printf("1st Number: ");
    show(poly1);
    printf("\n2nd Number: ");
    show(poly2);
    printf("\n---------------------------------\n");
    poly = multiply(poly1, poly2);
    printf("Multiplied polynomial: ");
    show(poly);

    return 0;
}