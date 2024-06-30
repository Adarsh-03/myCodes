#include<iostream>
using namespace std;

int sumarr(int arr[],int n){
    int sum =0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    cout<<"The sum of elements of array is : "<<sum <<endl;
    return sum;
    
}
int main(){
    int n,sumnatural=0,sum;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    sum = sumarr(arr,n);
    n++;
    sumnatural = (n*(n+1)/2);

    
    cout<<"The missing element is : "<<sumnatural - sum;

    return 0;
}