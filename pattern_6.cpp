#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1;i<=n;i++){
    int count =i;
       int space=n-i;
       for (int j =space; j > 0; j--)
       {
        cout<<" ";
       }
       for (int j = 0; j < i; j++)
       {
        cout<<count;
        count ++;
       }
       
       for (int k=2; k <=i ; k++)
       {
        cout<<count-2;
        count--;
        
       }
       
       cout<<endl;
    }
    return 0;
}