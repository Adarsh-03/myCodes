#include<iostream>
using namespace std;
int main(){
    int bs,da,hra,al,pf,gs;
    char grade;
    cout<<"Enter the basic salary"<<endl;
    cin>>bs;

    cout<<"Enter the grade"<<endl;
    cin>>grade;

    hra = bs*20/100;
    da = bs*50/100;
    if (grade == 'A')       
    {
        al = 1700;  
    }
    
    ;
    if (grade == 'B')       
    {
        al = 1500;  
    }
    else{
        al = 1300;  
    }

    pf = bs*11/100;

    gs = bs + hra + da +  al - pf ;

    cout<<"The gross salary is : "<<gs<<endl;
    
    return 0;
}