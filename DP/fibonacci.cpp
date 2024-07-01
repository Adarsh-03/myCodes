#include<iostream>
#include<vector>
using namespace std;


// // --------------------------------------------- Top Down Approach ----------------------------------------------
// int fibo(int n, vector<int> &dp){
//     // base case
//     if(n <= 1)
//         return n;
    
//     // 3rd step
//     if(dp[n] != -1)
//         return dp[n];

//     // 2nd step
//     dp[n] = fibo(n-1, dp) + fibo(n-2, dp);

//     return dp[n];
// }

// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;

//     // 1st step
//     vector<int> dp(n+1, -1);

//     cout<<"The "<<n<<"th fibonacci number is: "<< fibo(n,dp)<<endl;;
//     return 0;
// }


//------------------------------------------------- Bottom Up Approach --------------------------------------------
int fibo(int n){
    vector<int> dp(n+1);
    dp[0] = 0;
    dp[1] = 1;

    for(int i=2;i<=n;i++)
        dp[i] = dp[i-1] + dp[i-2];
    
    return dp[n];
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    cout<<"The "<<n<<"th fibonacci number is: "<<fibo(n)<<endl;
    return 0;
}