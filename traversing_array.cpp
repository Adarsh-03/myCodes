#include <stdio.h>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array is : "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements of array is : "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    } 
    cout<<"The array is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    } 
    return 0;
}