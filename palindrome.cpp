#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool palindrome(string s, int i,int j){
    if (i<j)
    {
        swap(s[i],s[j]);
    }
    
    
    
}

int main(){
    string s;
    cin>>s;
    int i = 0;
    int j = s.length()-1;
    palindrome(s,0,j);
    cout<<s;
    return 0;
}