#include <stdio.h>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    int k=0  ;
    // int u[100];
    int r[100] , flag =0 ;
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            for (int j = i+1; j < n; j++)
            {
                if (arr[i]==arr[j])
                {
                    r[k++]=arr[i];
                    flag =1;
                    arr[j] =0;
                }
                
            }

            // if (flag==0)
            // {
            //     u[l+1]=arr[i];
            // }
            
            
        }

        
    }
    cout<<"The repeated elements are  : ";
    // for (int i = 0; i < l; i++)
    // {
    //     cout<<u[i]<<" "<<endl;
    // }
    
    
    for (int i = 0; i < k; i++)
    {
        cout<<r[i]<<" "<<endl;
    }
    
    return 0;
}


