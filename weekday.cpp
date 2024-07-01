#include<iostream>
using namespace std;
int main(){
    int date,month,year,d,c,day;
    cout<<"Enter the date : ";
    cin>>date;
    cout<<"Enter the month : ";
    cin>>month;
    cout<<"Enter the year : ";
    cin>>year;

    d = year%100;
    c = year/100;

    if (month==1 || month==2)
    {
        month = month + 10;
    }
    else
    {
        month = month - 2 ; 
    }
    
    
    

    day = (date + (13*month - 1)/5 + d +d/4 + c/4 + 5*c)%7 ;
    switch (day)
    {
    case 0:
        cout<<"Sunday";
        break;
    case 1:
        cout<<"Monday";
        break;
    case 2:
        cout<<"Tuesday";
        break;
    case 3:
        cout<<"Wednesday";
        break;
    case 4:
        cout<<"Thrusday";
        break;
        
    case 5:
        cout<<"Friday";
        break;
     case 6:
        cout<<"Saturday";
        break;
    default:
        cout<<"Enter valid input";
        break;
    }
    return 0;
}