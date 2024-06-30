#include<iostream>
#include<bits/stdc++.h>

void merge(int *a,int s,int e){
    int mid = (s+e)/2 ;

    int l1 = mid - s + 1 ;
    int l2 = e - mid + 1 ;

    int a1[l1];
    int a2[l2];

    int k = s;
    for(int i=0;i<l1;i++)
        a1[i] = a[k++];

    k = mid + 1 ;
    for(int i=0;i<l2;i++)
        a2[i] = a[k++];

    int index1 = 0; 
    int index2 = 0;

    int mainarrayindex = s;

    while (index1 < l1 && index2 < l2)
    {
        if (a1[index1] < a2[index2])
        {
            a[mainarrayindex++] = a1[index1++];
        }
        else
        {
            a[mainarrayindex++] = a2[index2++];
        }
    }

    while (index1 < l1)
    {
        a[mainarrayindex++] = a1[index1++];
    }
    while (index2 <l2)
    {
        a[mainarrayindex++] = a2[index2++];
    }
    
    
}

void mergesort(int *a ,int s,int e){
    if(s>=e)   
        return ;
    
    int mid = (s+e)/2 ;
    mergesort(a,s,mid);

    mergesort(a,mid+1,e);

    merge(a,s,e);
}

using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i < n ;i++)
        cin>>a[i];

    mergesort(a,0,n-1);

    for(int i=0; i < n ;i++)
        cout<<a[i]<<" "; 

    return 0;
}