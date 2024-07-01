#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,k;
    cin>>a>>b>>k;
    int p = pow(a,b);
    int rem=0;
    while (k>0)
    {
        rem = p%10;
        if (k==1)
        {
            cout<<rem<<endl;
        }
        
        p/=10;
        k--;
    }
    
    return 0;
}