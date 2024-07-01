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
    int len = FindLength(s);
    int k=0;
    char rev[len];
    for (int i = len; i >= 0; i--)
    {
        rev[k] = s[i];
        k++;
    }
    cout<<rev;
    return 0;
}