#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node* next;
    // _Constructor
    Node( int data){
        this ->data = data;
        this ->next = NULL;
    }

};

// For Insertation at Head
void insertionAtHead(Node* &head,int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}


// For insertion at middle
void insertionAtMiddle(){
    
}

// For Insertation at Tail
void insertionAtTail(Node* &tail,int d){
     Node* temp = new Node(d);
      tail -> next = temp;
      tail= temp;

}


void print(Node* &head){
    Node* temp = head ; 
    while(temp != NULL){
        cout<< temp ->data <<" ";
        temp = temp ->next ;
    }
    cout<<endl;
}

int main(){
    // created a new node
    Node* node1 = new Node(10);
    // cout<< node1 ->data <<endl;
    // cout<< node1 ->next <<endl;

    // head pointed to node1
    Node* head = node1;
    Node* tail = node1;

    print(head);
    insertionAtTail(tail,12);

    print(head);
    insertionAtTail(tail,15);

    print(head);
    return 0;
}
