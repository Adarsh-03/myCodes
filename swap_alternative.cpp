#include<iostream>
using namespace std;

void printarray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapalternate(int arr[], int n){
    for (int i = 0; i < n; i+=2)
    {
        if (i+1<n)
        {
            swap(arr[i],arr[i+1]);
        }
        
    }
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    // int arr[6] = {1,2,3,4,5,6};
    
    swapalternate(arr, n);
    printarray(arr,n);

    return 0;
}