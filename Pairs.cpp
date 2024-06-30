#include<iostream>
#include<tuple>
#include<string>
#include<utility>
using namespace std;
int main(){
    pair<string,int> s1,s2;
    cout<<"Enter the First Name :";
    cin>>s1.first;
    cout<<"Enter you First rollno :";
    cin>>s1.second;
    cout<< s1.first<<endl;
    cout<< s1.second<<endl;

    cout<<"Enter the Second Name :";
    cin>>s2.first;
    cout<<"Enter you Second rollno :";
    cin>>s2.second;
    cout<< s2.first<<endl;
    cout<< s2.second<<endl;


    swap(s1,s2);
    cout<<"After Swapping :"<<endl;
    cout<<"First Pair"<<endl;
    cout<< s1.first<<endl;
    cout<< s1.second<<endl;

    cout<<"Second Pair"<<endl;
    cout<< s2.first<<endl;
    cout<< s2.second<<endl;


    string s;
    int a;

    tie(s,a) = s1;
    cout<<s<<a;
    return 0;
}