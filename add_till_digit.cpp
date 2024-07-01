#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int total(int n){
    int rem=0,s=0;
    while(n!=0){
        rem=n%10;
        s+=rem;
        n/=10;
        }
    return s;
}
int main(){
    int n,count=0,a=0;
    cin>>n;
    while (1)
    {
        count++;
        n = total(n);
        if (n<10)
        {
            break;
        }
        
    }

        cout<<count;
    
    return 0;
}