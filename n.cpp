#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int difference(int a[],int n){
    int mindiff=0;
    for(int i=0;i<n;i++){
        int diff =0;
        for(int j=i+1;j<n;j++){
            diff = (a[i] - a[j]);
            // cout<< diff<<" ";
            diff = abs(diff);
            // cout<<diff<<" ";
        }
        if(mindiff==0 && diff != 0){
            mindiff = diff;
        }
        else if(diff<mindiff && diff != 0){
            mindiff = diff;
        }
    }
    return mindiff;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    int ans = difference(a,n);
	    cout<<ans<<endl;
	    
	}
	return 0;
}
