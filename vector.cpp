#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    cout<<"Capacity "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity "<<v.capacity()<<endl;
    
    v.push_back(3);
    cout<<"Capacity "<<v.capacity()<<endl;

    // cout<<v.size()<<endl;
    
    // cout<<v.at(0)<<endl;
    // cout<<v.front()<<endl;
    
    // cout<<v.back()<<endl;
    cout<<"before pop"<<endl;
    for (int i:v)
    {
       cout<<i<<" ";
    }
    // v.pop_back();
    cout<<endl;
    cout<<"after pop"<<endl;
    for (int i:v)
    {
       cout<<i<<" ";
    }

    // v.clear();
    // cout<<v.size()<<endl;

    // cout<<"after clear"<<endl;
    cout<<endl;
    vector<int> last(v);
    for (int i:last)
    {
       cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}