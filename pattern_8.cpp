#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1;i<=n;i++){
        // int count = ;
        int space = n-i;

        for(int j=space;j>0;j--){
            cout<<" ";
            space--;
        }
         for(int j=1;j<=i;j++){
            cout<<"*";
            // count--;
        }

        for (int k = 1; k < i; k++)
        {
            cout<<"*";
            // count++;
        }
        
         cout<<endl;
    }
    return 0;
}