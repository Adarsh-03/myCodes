#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int c,a;
    while (1)
    {
        cout<<"You wnat more"<<endl;
        cin>>c;
        if (c==0)
        {
            break;
        }

        cout<<"Enter the data"<<endl;
        cin>>a;
        v.push_back(a);

        cout<<v.size()<<endl;
        cout<<v.capacity()<<endl;
        
    }
    
    return 0;
}