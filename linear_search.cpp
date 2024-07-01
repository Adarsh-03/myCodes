#include<iostream>
using namespace std;

bool search(int array[],int n, int key){
    for (int i = 0; i < n; i++)
    {
        if (key == array[i])
        {
            return 1;
        }
        
    }
    return 0;
    
}

int main(){
    int n,i;
    cin>>n;
    int array[n];
    for(i=0;i<n;i++){
        cin>>array[i];
    }

    int key;
    cout<<"Enter the element you want to search : ";
    cin>>key;
    bool found = search(array,n,key);
    if (found)
    {
        cout<<"Element is present.";
    }
    else
    {
        cout<<"Element is not present.";
    }
    
    

    return 0;
}