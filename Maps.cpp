#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(){
    map<string,int > m1;
    // marksmap["suresh"] = 100;
    // marksmap["ramesh"] = 60;
    // marksmap["rinku"] = 78;
    int n,val;
    string key;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"Key : ";
        cin>>key;
        cout<<"Value : ";
        cin>>val;
        m1.insert({key,val});
    }
    m1.find("ramesh");
    cout<<endl;
    map<string,int> :: iterator itr;
    // for(itr = marksmap.begin();itr!=marksmap.end();itr++){
    //     cout<<(*itr).first<<" -> "<<(*itr).second<<endl;
    // }
    // marksmap.insert({{"chelan",45},{"tum",23},{"tinku",50}});

    for(itr = m1.begin();itr!=m1.end();itr++){
        cout<<(*itr).first<<" - "<<(*itr).second<<endl;
    }
    cout<<m1.size()<<endl;
    
    return 0;
}