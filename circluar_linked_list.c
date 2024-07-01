#include<stdio.h>
#include <stdlib.h> 
struct node{
    int data;
    struct node* next; 
};

struct node* getnode(){
    struct node* p;
    p=(struct node*)(malloc(sizeof(struct node)));
    return p;
}

void insBeg(struct node** start,int val){
    struct node* p=getnode();
    p->data=val;
    struct node* q=*start;
    if(q!=NULL){
        p->next=q->next;
        q->next=p;
    }
    else{
        p->next=p;
        *start=p;
    }
}

void insEnd(struct node** start,int val){
    struct node* p=getnode();
    p->data=val;
    struct node* q=*start;
    if(q!=NULL){
        p->next=q->next;
        q->next=p;
        *start=p;
    }
    else{
        p->next=p;
        *start=p;
    }
}

int Delbeg(struct node** start){
    struct node* p=*start;
    struct node* temp=p->next;int val=0;
    if (p->next ==p){
        return p->data;
    }     
    else if (p==NULL)
    return -1;
    
    else{
        p->next=p->next->next;
         val=temp->data;
        free(temp);
        
    }
    return val;
}

int DelEnd(struct node** start){
    struct node* p=*start;
    struct node* q=p->next; 
    
    while(q->next!=*start){
        q=q->next;
    }
    q->next=p->next;
    int val=p->data;
    *start=q;
    free(p);
    return val;

}

void display( struct node* start){
    struct node* temp=start;
   do {
     printf("%d->",temp->data);
     temp=temp->next;
   } while(temp != start);
   printf("\n");
}

int main(){
    struct node* start=NULL;
    // insBeg(&start,78);
    // insBeg(&start,2);
    // insBeg(&start,3);
    // insBeg(&start,3);
    insEnd(&start,34);
    insEnd(&start,23);
    insEnd(&start,100);
    insEnd(&start,4);
    insEnd(&start,6);
    display(start);
    // printf("%d",Delbeg(&start));
    printf("%d ",DelEnd(&start));
    display(start);
}