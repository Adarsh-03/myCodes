#include <stdio.h>
#include <stdlib.h>
struct node
{
	int power;
	int coeff;
	struct node *next;
};
struct node *getnode()
{
	struct node *p;
	p = (struct node *)(malloc(sizeof(struct node)));
	return p;
}

void insertatend(struct node **START, int x, int y)
{
	struct node *q;
	q = getnode();
	q->coeff = x;
	q->power = y;
	q->next = NULL;

	struct node *p = *START;
	if (p == NULL)
	{
		*START = q;
	}
	else
	{
		while (p->next != NULL)
		{
			p = p->next;
		}
		p->next = q;
	}
}

void display(struct node *START)
{
	struct node *temp;
	temp = START;
	while (temp != NULL)
	{
		printf("%dx^%d + ", temp->coeff, temp->power);

		temp = temp->next;
	}
}

void delafter(struct node *q)
{
	struct node *q1 = q;
	struct node *temp = q1->next;
	q1->next = temp->next;
	free(temp);
}

void merge(struct node *head)
{
	struct node *p1, *p2, *duplicate;
	p1 = head;
	while (p1 != NULL && p1->next != NULL)
	{
		p2 = p1;
		while (p2->next != NULL)
		{
			if ((p1->power) == (p2->next->power))
			{
				p1->coeff = p1->coeff + p2->next->coeff;
				duplicate = p2->next;
				p2->next = p2->next->next;
				free(duplicate);
			}
			else
				p2 = p2->next;
		}
		p1 = p1->next;
	}

	display(head);
}

void mult(struct node *poly1, struct node *poly2)
{
	struct node *p1 = poly1, *p2 = poly2;
	struct node *poly3 = NULL;
	while (p1 != NULL)
	{
		struct node *temp = p2;
		while (temp != NULL)
		{
			insertatend(&poly3, ((p1->coeff) * (temp->coeff)), (p1->power + temp->power));
			temp = temp->next;
		}

		p1 = p1->next;
	}

	merge(poly3);
}

int main()
{
	struct node *f1 = NULL;
	struct node *f2 = NULL;
	struct node *f3 = NULL;

	insertatend(&f1, 2, 4);
	insertatend(&f1, 5, 3);
	insertatend(&f1, 3, 2);

	printf("The first list is:");
	display(f1);

	printf("\nThe second list is:");
	insertatend(&f2, 4, 5);
	insertatend(&f2, 2, 3);
	insertatend(&f2, 1, 2);
	display(f2);

	printf("\nThe multiplication is:");
	mult(f1, f2);
	// display(f3);
	return 0;
}