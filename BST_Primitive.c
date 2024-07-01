#include<stdio.h>
#include<stdlib.h>

struct node{
    int data ;
    struct node* left;
    struct node* right;
};

struct node * getnode(int item){
    struct node* p = (struct node*)malloc(sizeof(struct node));
    p->data = item;
    p->left = NULL;
    p->right = NULL;
    return p;
}

struct node* Buildroot(struct node* root){
    printf("Enter the data :\n");
    int item,prev;
    scanf("%d",&item);

    if (root==NULL)
    {
        root = getnode(item);
    }
    if (item==-1)
    {
        return NULL;
    }
    else if (item<prev)
    {
        prev = item;
        printf("Enter the data for inserting in left : \n");
        root->left = Buildroot(root->left);
    }
    else if (item>prev)
    {
        prev = item  ;
        printf("Enter the data for inserting in right : \n");
        root->right = Buildroot(root->right);
    }
    
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

int main(){
    struct node  *root = NULL;

    root = Buildroot(root);

    PrintInordder(root);
    return 0;
}