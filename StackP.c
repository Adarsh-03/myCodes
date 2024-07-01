#include<stdio.h>
#include<stdlib.h>
#define maxsize 10

struct Stack
{
    int top;
    int ar[maxsize];
}st;

void push(){
    if (st.top == maxsize-1)
    {
        printf("Stack is full!");
        return;
    }
    int x;
    printf("Enter the element you want to push\n");
    scanf("%d",&x);
    st.top = st.top + 1;
    st.ar[st.top] = x;
    
}

int pop(){
    if (st.top == -1)
    {
        printf("Stack is empty!\n");
        return st.top;
    }
    int x;
    x = st.ar[st.top];
    st.top = st.top - 1;
    return x;
}

void display(){
    if (st.top == -1)
    {
        printf("Stack is empty!\n");
        return;
    }

    for (int i = st.top; i > -1; i--)
        {
            printf("%d ",st.ar[i]);
        }
    printf("\n");
}

void top(){
    printf("The element %d is on top of stack\n",st.ar[st.top]);
}
void size(){
    int count=0;
    for (int i = st.top; i > -1; i--)
        {
            count++;
        }
    printf("Size of stack is %d\n",count);
}

int main(){
    int choice;
    int option = 1;
    st.top = -1;
    while (option)
    {
        printf("Enter your choice :\n1 to push \n2 to pop \n3 to display\n4 to find top\n6 to find size \n6 to exit\n");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            printf("Poped item is %d\n",pop()) ;
            break;
        case 3:
            display();
            break;
        case 4:
            top();
            break;
        case 5:
            size();
            break;
        case 6:
            option = 0;
            break;
        default:
            break;
        }
    }
    
    return 0;
}