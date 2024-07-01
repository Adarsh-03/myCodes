// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a=0;
//     vector<int> v;
    
//     for (int i = 0; i < 10; i++)
//     {
//         cin>>a;
//         v.push_back(a);
//         cout <<"Size : "<< v.size() << endl;
//         cout <<"Capacity : "<< v.capacity() << endl;
//     }
//     cout<<"Vector is : ";
//     for (int  i = 0; i < v.size(); i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     v.insert(v.begin()+2,25);
//     v.insert(v.begin()+5,30);
//     cout<<"\nVector is : ";
//     for (int  i = 0; i < v.size(); i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     v.erase(v.begin()+5);
//     cout<<"\nVector is : ";
//     for (int  i = 0; i < v.size(); i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     sort(v.begin(),v.end());
//     cout<<"\nVector is : ";
//     for (int  i = 0; i < v.size(); i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     return 0;
// }
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<string , int> p ;
    vector< pair<string,int>> v;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>p.first >>p.second;
        v.push_back(p);
    }
    cout<<"Name"<<" "<<"Roll No "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    
    
    return 0;
}