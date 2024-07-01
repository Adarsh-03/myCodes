#include<iostream>
using namespace std;
int main(){
    int r ,c ;
    cin>>r>>c;
    for (int i =0 ; i<r;i++){
        for(int j = 0 ; j<c;j++){
            if(i==0 || i==r-1 ){
                cout<<"* ";
            }
            else 
            { if(j==0 || j ==c-1)
                cout<<"* "; 
            
            
             else
            {
                cout<<"  ";
            }
        }
        }
        cout<<endl;
    }
    return 0;
}   

// #include<iostream>
// using namespace std ;

// int main()

// {
//     int n,m;
//     cin>>n>>m;
//     for(int i=0;i<n;i++)
//     {
        
//         for(int j=0;j<m;j++)
//         {
//             if (i==0||i==n-1)
//              {
//                 cout<<"* ";
//               }
//             else
//             {
//                 if(j==0||j==m-1)
//                   {
//                     cout<<"* ";
//                   }
//                 else
//                   {
//                         cout<<"  ";
//                   }
                
//             }
//         }
//             cout<<endl;
//     }
    
//     return 0 ;
// }