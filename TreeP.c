#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *getnode()
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    return p;
}

struct node *newnode(int item){
    struct node* p = getnode();
    p->data = item;
    p->left = NULL;
    p->right = NULL;
    return p;
}

struct node *BuildRoot(struct node* root){
    
    int data;
    printf("Enter the value of data : \n");
    scanf("%d", &data);
    root = newnode(data);

    if (data == -1)
    {
        return NULL;
    }
    printf("Enter the data you want to insert in left \n");
    root->left = BuildRoot(root->left);
    printf("Enter the data you want to insert in right \n");
    root->right = BuildRoot(root->right);

    return root;
}


void PrintInorder(struct node* root){
    if (root==NULL)
    {
        return;
    }
    PrintInorder(root->left);
    printf("%d ",root->data);
    PrintInorder(root->right);
    
}

void PrintPreorder(struct node* root){
    if (root==NULL)
    {
        return;
    }
    printf("%d ",root->data);
    PrintPreorder(root->left);
    PrintPreorder(root->right);
    
}

void PrintPostorder(struct node* root){
    if (root==NULL)
    {
        return;
    }
    PrintPostorder(root->left);
    PrintPostorder(root->right);
    printf("%d ",root->data);
    
}


int main()
{
    struct node *root = NULL;

    root = BuildRoot(root);
    printf("Inorder representation of tree is");
    PrintInorder(root);
    printf("\n");
    PrintPreorder(root);
    printf("\n");
    PrintPostorder(root);
    printf("\n");
    return 0;
}