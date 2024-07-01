#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
     public:
     int data;
     node* next;

     // constructor
     node(int val){
          this->data = val;
          this->next = NULL;
     }
};


node* insert(node* head,int data){
     node* home = head;
     node* temp = new node(data);
     if(head==NULL){
          head = temp;
          return head;
     }

     while(head->next!=NULL){
          head = head->next;
     }
     head->next = temp;
     head = home;

     return head;
}

void printLL(node* &head){
     node* temp = head;
     while(temp!=NULL){
          cout<<temp->data<<"->";
          temp = temp->next;
     }
     cout<<"NULL"<<endl;
}

node* reverseLL(node* head){
     if(head==NULL || head->next== NULL)
          return head;

     node* newHead = reverseLL(head->next);
     head->next->next = head;
     head->next = NULL;

     return newHead;
}

int main(){
     node* head = NULL;
     
     head = insert(head,10);
     head = insert(head,20);
     head = insert(head,30);
     head = insert(head,40);
     printLL(head);

     head = reverseLL(head);
     printLL(head);
     return 0;
}