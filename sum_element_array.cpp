#include<iostream>
using namespace std;

int sum(int arr[],int n){
    int sum =0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
    
}

int main(){
    int n;
    cout<<"Enter the lenght of an array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of an array : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"The sum of elements of array is : "<<sum(arr,n);

    return 0;
}