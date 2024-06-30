#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,q,k,input;
    cin >> n >> q;
    vector<int> k_vector;
    vector<int> q_vector;
    vector<vector<int>> n_vector;
    vector<vector<int>> query_vector;
    
    for(int i=0;i<n;i++){
       k_vector={};
        cin >> k ;
        for(int j=0;j<k;j++){
            cin >> input;
            k_vector.push_back(input);
        }
       n_vector.push_back(k_vector); 
        
    }
    
    for (int i=0;i<q;i++){
        
        q_vector ={};
        
        for(int l=0;l<2;l++){
            cin >> input;
            q_vector.push_back(input);
        }        
       query_vector.push_back(q_vector);
    }
    
    for(vector<int> q : query_vector){
        
        printf("%d \n",n_vector[q[0]][q[1]]);        
    } 
    return 0;
}