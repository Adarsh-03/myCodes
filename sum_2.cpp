#include<iostream>
#include<bits/stdc++.h>

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

using namespace std;
int main(){
    int n,sum=0;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + (factorial(i)/i);
    }
    
    cout<<sum<<endl;
    return 0;
}