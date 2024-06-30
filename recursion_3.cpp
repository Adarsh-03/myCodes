// sum of an array

// #include<iostream>
// using namespace std;

// int sum(int a[],int n){
//     int s=0;
//     if (n==0)
//     {
//         return 0;
//     }
//     if (n==1)
//     {
//         return a[0];
//     }
//     int rem = sum(a+1,n-1);
//     s= a[0] + rem;

//     return s;

// }
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++)
//     cin>>a[i];

//     int s = sum(a,n);

//     cout << "sum is "<<s;

//     return 0;
// }

// sorted array
// #include<iostream>
// using namespace std;

// bool sortedarray(int a[],int size){
//     if (size ==0 || size == 1)
//     {
//         return true;
//     }
//     if (a[0]>a[1])
//     {
//         return false;
//     }
//     else
//     {
//         bool rem = sortedarray(a+1,size-1);
//     return rem;
//     }

// }
// int main(){
//     int a[6] = {3,4,8,6,7,9};
//     int size =6;

//     bool ans = sortedarray(a,size);

//     if (ans)
//     {
//         cout<<"array is sorted";
//     }
//     else
//     {cout<<"array is not sorted";

//     }

//     return 0;
// }

// linear search
// #include <iostream>
// using namespace std;

// bool linearsearch(int a[], int n, int key)
// {

//     if (n == 0)
//     {
//         return false;
//     }

//     if (a[0] == key)
//     {
//         return true;
//     }
//     else
//     {

//         bool rem = linearsearch(a + 1, n - 1, key);
//         return rem;
//     }

//     linearsearch(a + 1, n - 1, key);
// }
// int main()
// {
//     int n, key;
//     cin >> n >> key;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     bool ans = linearsearch(a,n,key);
//     if(ans)
//     cout<<"present";
//     else
//     cout<<"not present";
//     return 0;
// }


// binary search

#include<iostream>
#include<bits/stdc++.h>
bool binarysearch(int a[],int s,int e,int key){


    if (s>e)
    {
        return false;
    }
    
    int mid=(s+e)/2;
    if(a[mid]==key){
        return true;
    }
    else
    {
        if (a[mid]>key)
        {
            binarysearch(a,s,e=mid-1,key);
        }
        else if (a[mid]<key)
        {
            binarysearch(a,s=mid+1,e,key);
        }
        
        else
            return false;
    }
    
}
using namespace std;
int main(){
    int a[6] = {1,2,3,4,5,6};
    int n=6,key;
    cin>>key;
    int s=0;
    int e=n-1;
    bool ans = binarysearch(a,s,e,key);
    if (ans)
    {
        cout<<"Present";
    }
    else
    {
        cout<<"Not Present";
    }
    
    
    return 0;
}