#include<iostream>
using namespace std;
int main(){
    int temp;
    cin>>temp;
    if(temp<0)
    cout<<"Freezing weather";
    
    else if(temp>0 && temp<10)
    cout<<"Very cold weather";
    
    else if(temp>10 && temp<20)
    cout<<"Cold weather";
    
    else if(temp>20 && temp<30)
    cout<<"Normal in temperature";
    
    else if(temp>30 && temp<40)
    cout<<"Hot weather";

    else
    cout<<"Very Hot weather";

    return 0;
}