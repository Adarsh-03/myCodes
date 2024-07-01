#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100
int top=-1;
int item;
char stack_string[MAX];

int isEmpty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}

int isFull()
{
    if(top==MAX-1)
        return 1;
    else
        return 0;
}
void push(char item)
{
    if(isFull())
    {
        printf("\nStack is FULL !!!\n");
        return;
    }
    
    top=top+1;
    stack_string[top]=item;
}
 
char pop()
{
    if(isEmpty())
    {
        printf("\nStack is EMPTY!!!\n");
        return 0;
    }

    item = stack_string[top];
    top=top-1;
    return item;
}
 
int main()
{
    char s[MAX];
    scanf("%s", &s);
    int i;
    for(i=0;i<strlen(s);i++)
        push(s[i]);
        
    for(i=0;i<strlen(s);i++)
        s[i]=pop();

    printf("Reversed String is: %s\n",s);
    return 0;
}