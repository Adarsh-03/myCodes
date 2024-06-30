#include<bits\stdc++.h>
using namespace std;
int main(){
    int n,i=0;
    cin>>n;

    char arr[n+1];
    cin>>arr;

    // cout<<arr<<endl;
    bool check =1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n-1-i])
        {
            check =0;
            break;
        }
        
    }
    if (check == true)
    {
        cout<<"Word is palinrome"<<endl;
    }
    else
    {
        cout<<"Word is not a palinrome"<<endl;
    }
    
    
    
    return 0;
}