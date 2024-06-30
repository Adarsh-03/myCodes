#include<iostream>
using namespace std;

int uniqueele(int arr[], int size){
    int sum = 0 ;
    for (int i = 0; i < size; i++)
    {
        sum =  sum ^ arr[i];
    }
    cout<<"The unique element is : " <<sum ;
    return 0;
}
int main(){
    int size;
    cin>>size;

    int arr[size] ;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    uniqueele(arr,size);

    return 0;
}