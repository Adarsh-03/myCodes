#include<iostream>
#include<bits/stdc++.h>

int FindLength(char str[]) {
   int len = 0;
   while (str[len] != '\0')
      len++;
   return (len);
}

using namespace std;
int main(){
    char s[100];
    cin>>s;
    int count = FindLength(s);
    cout<<count;
    return 0;
}