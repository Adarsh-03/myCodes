#include <stdio.h>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

int mergearr(int a[],int n,int b[], int m){
    int k=0;
    int c[100];
    for (int j = 0; j < n; j++)
    {
        c[k] = a[j];
        k++;

    }
    for (int i = 0; i < m; i++)
    {
        c[k]=b[i];
        k++;
    }
    sort(c, c+n+m);
    cout<<" The elements of merged array is : "<<endl;
    for (int i = 0; i < k; i++)
    {
        cout<<c[i]<<" ";
    }
    
}
int main(){
    int n,m;
    cout<<" Enter the size of 1st and 2nd array : "<<endl;
    cin>>n>>m;
    int a[n] ,b[m];
    cout<<" Enter elements of 1st array : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<" Enter elements of 2nd array : "<<endl;
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }

    mergearr(a ,n, b ,m);
    return 0;
}