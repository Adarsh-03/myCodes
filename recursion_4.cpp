#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reversestr(string *a, int s,int e){

    if ((s>e))
    {
        return ;
    }
    
    else if (s<e)
    {
        swap(a[s],a[e]);
    }

    reversestr(a,s+1,e-1);
    
}

int main(){
    
    int n;
    cin>>n;
    string a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    int s=0;
    int e=n-1;
    reversestr( a,s,e);
   
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}