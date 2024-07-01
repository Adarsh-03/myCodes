#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
    struct node *parent;
};

int getnode(int item)
{
    struct node *p = (struct node *)(malloc(sizeof(struct node)));
    p->data = item;
    p->left = NULL;
    p->right = NULL;
    p->parent = NULL;

    return p;
}

struct node insertation_I(struct node *root, int item)
{
    struct node *p = getnode(item);
    struct node *r;
    struct node *q;

    if (root == NULL)
    {
        root = p;
    }
    else
    {
        r = root;
        q = NULL;
        while (r != NULL)
        {
            if (item < r->data)
            {
                q = r;
                r = r->left;
            }
            else
            {
                q = r;
                r = r->right;
            }
        }
        if (item < q->data)
        {
            q->left = p;
            p->parent = q;
        }
        else
        {
            q->right = p;
            p->parent = q;
        }
    }
}

struct node *insertation_R(struct node *root, struct node *q, int item)
{
    if (root == NULL)
    {
        struct node *p = getnode(item);
        root = p;
        p->parent = q;
    }
    else if (item < root->data)
    {
        root->left = insertation_R(root->left, root, item);
    }
    else
    {
        root->right = insertation_R(root->right, root, item);
    }
    return root;
}

int Isleft(struct node *q)
{
    if (q->parent->left == q)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int IsRight(struct node *q)
{
    if (q->parent->right == q)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    struct node *root = NULL;

    return 0;
}