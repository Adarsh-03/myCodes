#include<stdio.h>
#include<stdlib.h>
#define maxsize 100

struct stack
{
    int top;
    int data[maxsize];
}s;
int empty(top){
    if (s.top==-1)
    {
        return 1;
    }
    return -1;
    
}
int pop(){
    int item;
    if (empty)
    {
        return -1;
    }
    item = s.top;
    
    
}

int main(){
    
    return 0;
}