// #include <iostream>
// using namespace std;

// // int pfun(int & n){
// //     n++;
// //     return n ;
// // }

// int main()
// {
//     int n =5;

//     int arr[5] = {1,2,4};
//     int *ptr = &arr[2];
//     // int *ptr = &n;
//     //  cout<<ptr<<endl;
//     //  cout<<&ptr<<endl;
//     //  cout<<*ptr<<endl;
//     //  cout<<n<<endl;
//     //  cout<<&n<<endl;
//     // pfun(n);
//     // cout << n<<endl;
//     cout<<*ptr<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int *arr = new int[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"the array is ";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int **arr = new int* [n];
    for(int i=0;i<n;i++){
        arr[i] = new int[n];
    }
    return 0;
}