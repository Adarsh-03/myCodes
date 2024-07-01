#include <stdio.h>
#include <stdlib.h>
struct node
{
    int coeff;
    int power;
    struct node *next;
};
struct node *getnode()
{
    struct node *p = (struct node *)(malloc(sizeof(struct node)));
    return p;
}

void display(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {

        printf("%dx^%d", temp->coeff, temp->power);

        if (temp->coeff > 0)
        {
            if (temp->next != NULL)
                printf("+");
            temp = temp->next;
        }
    }
}

void insEnd(struct node **head, int c, int p)
{
    struct node *new = getnode(), *temp = *head;
    new->coeff = c;
    new->power = p;
    new->next = NULL;

    if (temp == NULL)
        *head = new;

    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = new;
    }
}
void addPoly(struct node *poly1, struct node *poly2)
{
    struct node *poly3 = NULL;

    while (poly1 && poly2)
    {
        if (poly1->power > poly2->power)
        {
            insEnd(&poly3, poly1->coeff, poly1->power);
            poly1 = poly1->next;
            // poly3=poly3->next;
        }

        else if (poly1->power < poly2->power)
        {
            insEnd(&poly3, poly2->coeff, poly2->power);
            poly2 = poly2->next;
            // poly3=poly3->next;
        }

        else
        {
            insEnd(&poly3, poly1->coeff + poly2->coeff, poly1->power);
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
    }

    while (poly1 || poly2)
    {
        if (poly1)
        {
            insEnd(&poly3, poly1->coeff, poly1->power);
            poly1 = poly1->next;
        }
        if (poly2)
        {
            insEnd(&poly3, poly2->coeff, poly2->power);
            poly2 = poly2->next;
        }
    }

    display(poly3);
}

int main()
{
    struct node *poly1 = NULL, *poly2 = NULL;

    insEnd(&poly1, 1, 3);
    insEnd(&poly1, 1, 2);
    insEnd(&poly1, 1, 1);
    printf("1st polynomial:");
    display(poly1);
    printf("\n");
    printf("2nd Polynomial:");
    insEnd(&poly2, 1, 3);
    insEnd(&poly2, 1, 2);
    display(poly2);
    printf("\n");

    printf("Addition of polynomials:");
    addPoly(poly1, poly2);
}