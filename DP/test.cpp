#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        long long sum = (n*(n-1))/2;

        if(k > sum){
            cout<<"NO"<<endl;
            continue;
        }
        
        if(k==0){
            cout<<"YES"<<endl;
            for (int i = 1; i <= n; i++)
            {
                cout<<i<<" ";
            }
            cout<<endl; 
            continue; 
        }
        vector<long long> v(n);
        for (long long i = 0; i < n; i++)
        {
            v[i] = i+1;
        }
        
        string ans="";
        int l =0 , r=n-1;
        while(r>l){
            if(k >= (r-l)){
                k -= (r-l);
                swap(v[l], v[r]);
                l++;
                r--;
            }
            else{
                swap(v[r-k], v[r]);
                k=0;
            }
        }
        cout<<"YES"<<endl;
        for (int i = 1; i <= n; i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl; 
        
        
    }
    return 0;
}