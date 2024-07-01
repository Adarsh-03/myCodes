#include<iostream>
#include<queue>
using namespace std;

class Node
{
     public:
          int data;
          Node* left;
          Node* right;

          Node(int d) {
               this->data = d;
               this->left = NULL;
               this->right = NULL;
          }

};

int height(Node* node)
{
    if (node == NULL)
        return 0;
    else {
         
        // Compute the height of each subtree
        int lheight = height(node->left);
        int rheight = height(node->right);
 
        // Use the larger one
        int maxH = max(lheight,rheight) + 1;
        return maxH;
    }
}
void printCurrentLevel(Node* root, int level)
{
    if (root == NULL)
        return;
    if (level == 1)
        cout << root->data << " ";
    else if (level > 1) {
        printCurrentLevel(root->left, level - 1);
        printCurrentLevel(root->right, level - 1);
    }
    
}
void levelOrder(Node* root)
{
    int h = height(root);
    int i; 
    for (i = 1; i <= h; i++){
        int x= i;
        printCurrentLevel(root, x);
        cout<<endl;
    }
}


Node* insertData(Node* root, int data){
     if (root == NULL)
     {
          root = new Node(data);
          return root;
     }

     if(data < root->data){
          root->left = insertData(root->left, data);
     }
     if(data > root->data){
          root->right = insertData(root->right, data);
     }
     
     return root;
}

Node* takeInput(Node* root){
     int data;
     cin>>data;

     while (data != -1)
     {
          root = insertData(root,data);
          cin>>data;
     }
     return root;
}
int main(){
     Node* root = NULL;
     cout<<"Enter the value of nodes:"<<endl;
     root = takeInput(root);
     cout<<"The BST of given node will be : "<<endl;
     levelOrder(root);
     return 0;
}