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

    for (int i = 0; i <= n; i++)
    {
        if (i%2 != 0)
        {
            sum = sum - (pow(n,i)/factorial(i));
        }
        else
        {
            sum = sum + (pow(n,i)/factorial(i));
        }
        
        
    }
    
    cout<<sum<<endl;
    return 0;
}