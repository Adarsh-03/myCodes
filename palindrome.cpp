#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a=0,rem;
    cin>>n;

       m=n;
    while (n!=0)
    {
        rem = n%10;
        a = a*10 +rem;
        n=n/10;
    }
    if(a==m)
    cout<<"Number is Palindrome";
    else
    cout<<"Number is not a palindrome";
    return 0;
}