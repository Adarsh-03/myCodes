#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int ls=0,rs=0;
    int n = s.size();
    int m= (n+1)/2;
    for (int i = 0; i < m-1; i++)
    {
        ls+=s[i];
        rs+=s[i+m];
    }
    if (ls==rs)
    {
        cout<<"YES , Number is Balanced !!!"<<endl;
    }
    else
    {
        cout<<"NO , Number is Not Balanced !!!"<<endl;
    }
    
    
    
    return 0;
}