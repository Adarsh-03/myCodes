#include<iostream>
using namespace std;
int main(){
     int n,m;
    cin>>n;

    int sum = 0;

    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum = sum + arr[j];
            cout<<sum<<endl;
        }
        
    }
    
    return 0;
}