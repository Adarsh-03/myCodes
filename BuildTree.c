#include <stdio.h>
#include <stdlib.h>
#define maxsize 100

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *getnode(int data)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->data = data;
    p->left = NULL;
    p->right = NULL;
    return p;
}

struct node *BuildRoot(struct node *root)
{
    printf("Enter the data : \n");
    int data;
    scanf("%d", &data);
    root = getnode(data);

    if (data == -1)
    {
        return NULL;
    }

    printf("Enter the data for inserting in left : \n");
    root->left = BuildRoot(root->left);
    printf("Enter the data for inserting in right : \n");
    root->right = BuildRoot(root->right);

    return root;
}

void PrintInordder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    PrintInordder(root->left);
    printf("%d ", root->data);
    PrintInordder(root->right);
}

void PrintPreordder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    printf("%d ", root->data);
    PrintPreordder(root->left);
    PrintPreordder(root->right);
}

void PrintPostordder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    PrintPostordder(root->left);
    PrintPostordder(root->right);
    printf("%d ", root->data);
}

int height(struct node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int lheight = height(root->left);
    int rheight = height(root->right);

    if (lheight > rheight)
    {
        return (lheight + 1);
    }
    else
        return (rheight + 1);
}

void printCurrentLevel(struct node *root, int level)
{
    if (root == NULL)
        return;
    if (level == 1)
        printf("%d ", root->data);
    else if (level > 1)
    {
        printCurrentLevel(root->left, level - 1);
        printCurrentLevel(root->right, level - 1);
    }
}
void LevelOrderTraversal(struct node *root)
{
    int h = height(root);
    for (int i = 1; i <= h; i++)
    {
        printCurrentLevel(root, i);
    }
}
int max(int a, int b, int c)
{
    if (a > b && a > c)
        return a;
    if (b > a && b > c)
        return b;
    if (c > a && c > b)
        return c;
}
int diameter(struct node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int op1 = diameter(root->left);
    int op2 = diameter(root->right);
    int op3 = height(root->left) + height(root->right) + 1;

    return max(op1, op2, op3);
}

int countNodes(struct node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
}

int countLeafnodes(struct node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else if (root->left == NULL && root->right == NULL) 
    {
        return 1;
    }

    return countLeafnodes(root->left) + countLeafnodes(root->right);
}

int main()
{
    struct node *root = NULL;
    root = BuildRoot(root);
    // 1 2 4 -1 -1 5 -1 -1 3 -1 -1
    printf("\nDiameter of tree is : %d\n", diameter(root));
    printf("\nTo print the inorder traversal : \n");
    PrintInordder(root);
    printf("\nHeight of tree is %d\n", height(root));
    printf("\nTo print the preorder traversal : \n");
    PrintPreordder(root);
    printf("\nTo print the postorder traversal : \n");
    PrintPostordder(root);
    printf("\nTo print the levelorder traversal : \n");
    LevelOrderTraversal(root);
    printf("\nNumber of nodes in tree are %d\n", countNodes(root));
    printf("\nNumber of Leaf nodes in tree are %d\n", countLeafnodes(root));

    return 0;
}