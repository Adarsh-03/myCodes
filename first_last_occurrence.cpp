#include<iostream>
using namespace std;

int firstocc(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid =(s+e)/2;
    int ans=-1;
    while (s<=e)
    {
        
        if(key == arr[mid]){
        ans = mid;
        e = mid-1;}
        
        else if (key>arr[mid])
        {
            s = mid+1;
        }
        
        else if (key<arr[mid])
        {
            e=mid-1;
        }
        
    mid = (s+e)/2;
    }
    return ans;
}

int lastocc(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid =(s+e)/2;
    int ans=-1;
    while (s<=e)
    {
        
        if(key == arr[mid]){
        ans = mid;
        s = mid+1;}
        
        else if (key>arr[mid])
        {
            s = mid+1;
        }
        
        else if (key<arr[mid])
        {
            e=mid-1;
        }
        
    mid = (e+s)/2;
    }
   return ans; 
}


int main(){
     int n;
    cin>>n;

    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cin>>key;

    int p = firstocc(arr,n,key);
    int q = lastocc(arr,n,key);

    cout<<"The first occurrence is at index : "<<p<<endl;
    
    cout<<"The last occurrence is at index : "<<q<<endl;

    cout<<"Total number of occurrence is : "<<(q - p + 1);
    return 0;
}