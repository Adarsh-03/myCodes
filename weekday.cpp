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


// #include<iostream>
// using namespace std;
// int main() {
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */
//     int m[5],count=1,w=0;
//     for(int i=0; i<5 ;i++){
//         cin>>m[i];
//         count++;
//     }
//     cout<<count;
//     for(int i=0; i<5 ;i++){
//             if(m[i]>100)
//                 w=m[i];
//         }   
//     if(w>100)
//         cout<<"Invalid Score";
//     else{
//         int sum =0;
//         float p;
//         for(int i=0; i<5 ;i++){
//             sum = sum + m[i];
//         }
//         p = sum/5;
//         if(p>90)
//         cout<<"A";
//         else if(p<=90 && p>80)
//         cout<<"B";
//         else if(p<=80 && p>60)
//         cout<<"C";
//         else if(p<60)
//         cout<<"D";
//     }
        
     
    
//     return 0;
// }