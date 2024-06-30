#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int a;
    float p = 0;
    float n=0;
    float z=0;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];

        if(arr[i]>0)
        {p++;}
        
        else if(arr[i]<0)
        {n++;}
        
        else
        {z++;}
    }
    
    
    // for(int i=0;i<a;i++){
        
        
    // }
     float j=p/a;
     float k=n/a;
     float l=z/a;
     
    cout<< fixed <<setprecision(6) << j <<endl << k <<endl << l <<endl;
    return 0;
}
