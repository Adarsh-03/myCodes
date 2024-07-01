// pattern 1
// 1 2 3 4 
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// #include<iostream>
// using namespace std;
// int main(){
//     int n , i=1;
//     cin>>n;
//      while( i<=n){
//         for(int j=1;j<=n;j++)
//         {cout<<j<<" ";}
//         cout<<endl;
//         i++;
//      }
//     return 0;
// }


// pattern 2
// 3 2 1 
// 3 2 1
// 3 2 1
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i =1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<(n-j+1)<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }


// pattern 3
// 1 2 3 
// 4 5 6
// 7 8 9

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int count =1;
//     for(int i=1;i<=n;i++){
//         for (int j = 0; j < n; j++)
//         {
//             cout<<count++<<" ";
            
//         }
//         cout<<endl;
        
//     }
//     return 0;
// }

// pattern 4
// *
// * *
// * * *
// * * * *

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<=n;i++){
//         for(int j=0;j<i;j++){
//             cout<<"*"<<" ";

//         }
//         cout<<endl;
//     }
//     return 0;
// }



// pattern 5
// 1 
// 2 2
// 3 3 3
// 4 4 4 4
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// pattern 6
// 1 
// 2 3
// 4 5 6
// 7 8 9 10
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int count=1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<count++<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// pattern 7
// 1 
// 2 3
// 3 4 5
// 4 5 6 7

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         // int count=i;
//         for(int j=1;j<=i;j++){
//             cout<<(i+j-1)<<" ";
//             // count++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// pattern 8
// 1 
// 2 1
// 3 2 1
// 4 3 2 1

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         int count =i;
//         for(int j=1;j<=i;j++){
            // cout<<count--<<" ";    //i-j+1
//         }
//         cout<<endl;
//     }

//     return 0;
// }

// pattern 9
// AAA
// BBB
// CCC
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<((char)('A'+i));
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// pattern 10
// ABC
// ABC
// ABC
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<((char)('A'+j));
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// pattern 11

// A B C 
// D E F
// G H I
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     char ch ='A';
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<(ch)<<" ";
//             ch++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// pattern 12
// A B C 
// B C D
// C D E
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
    
//     for(int i=1;i<=n;i++){
//         char ch =('A' +i-1);
//         for(int j=0;j<n;j++){
//             cout<<(ch)<<" ";
//             ch++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// pattern 13
// D 
// C D
// B C D
// A B C D
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//     char ch = ('A' + n-i);
//         for(int j=1;j<=i;j++){
//             cout<<ch<<" ";
//             ch++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// pattern 14

#include<iostream>
using namespace std;
int main(){
    int n , i=1;
    cin>>n;
    int space = n-i;
    for(int i=space;i>0;i++){
        cout<<" ";
        space--;
    }
    for (int i = 0; i <n; i++)
    {
    for (int j = 0; j < n; j++)
    {
        cout<<(n-j+i);
    }
    cout<<endl;
    }
    
    return 0;
}