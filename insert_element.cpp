#include<iostream>
using namespace std;

int main(){

    int a[50],n,i,j,key,temp,m;

    cout<<"Enter the length of array : ";
    cin>>n;


    cout<<"Enter the elements of array : ";
    for ( i=0;i<n;i++){
        cin>>a[i];
    }


    cout<<"The array is : ";
    for ( i=0;i<n;i++){
        cout<<a[i]<<" ";
    }


    cout<<endl;


    for (int k=0;k<n;k++){
         temp = a[k];
         j=k-1;

        while(j>=0&&temp<a[j]){
            a[j+1] = a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }

    cout<<"The sorted array is : ";
    for ( i=0;i<n;i++){
        cout<<a[i]<<" ";
    }



    cout<<endl;


    cout<<"Enter the element you want to insert : ";
    cin>>key;


    for( i=0; key>a[i]&&i<=n-1;i++);

    if( i > n-1 ){
        a[i]=key;}
    else{
        for( m=n-1;m>=i;m--){
            a[m+1]=a[m];
        }
        a[i]=key;
        n=n+1;
    }
    cout<<endl;
    cout<<"The new array is : ";
    for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}
