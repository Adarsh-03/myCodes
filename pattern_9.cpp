#include<iostream>
using namespace std;
int main(){
    int n=3;
    for(int i=1;i<=n;i++){
        
        int space = n-i;

        for(int j=space;j>0;j--){
            cout<<"  ";
            space--;
        }
         for(int j=1;j<=i;j++){
            cout<<" *";
           
        }

        for (int k = 1; k < i; k++)
        {
            cout<<" *";
            
        }
        
         cout<<endl;
    }
    return 0;
}

