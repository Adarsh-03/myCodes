//    *
//   **
//  ***
// ****

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
    
//     for(int i=n;i>0;i--){
//         for(int j=0;j<i-1;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<=n-i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;
    cin>>n;
    
    for(int i=n;i>0;i--){
        for(int j=0;j<i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<n;
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        
        cout<<endl;
    }
    // for(int i=0;i<=n;i++){
        

    //     }
    //     cout<<endl;
    }
    return 0;
}