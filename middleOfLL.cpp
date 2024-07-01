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

int length(node* head){
     int count =0;
     while (head!=NULL)
     {
          count++;
          head = head->next;
     }
     return count;
}

// node* middleLL(node* head){
//      int l = length(head);
//      int mid = l/2;
//      cout<<mid<<"\n";
//      int count = 0;
//      while(count < mid){
//           head = head->next;
//           count++;
//      }
//      return head;
// }

node* middleLL(node* head){
     if(head == NULL ||head->next==NULL)
        return head;
    if(head->next->next==NULL)
        return head->next;
    
    node* slow = head;
    node* fast = head->next;

    while(fast!=NULL){
        fast = fast->next;
        if(fast!=NULL)
            fast = fast->next;
        slow = slow->next;
    }
    return slow;
}


int main(){
     node* head = NULL;
     
     head = insert(head,10);
     head = insert(head,20);
     head = insert(head,30);
     head = insert(head,40);
     printLL(head);

     node *midNode = middleLL(head);
     cout<<"Middle element of linked list is : "<<midNode->data<<endl;
     return 0;
}