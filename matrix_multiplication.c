#include<stdio.h>
int main()
{
    int n,m,p,q;
    printf("This code is written by ABHAY PANDEY //CS-A//2100320120004 \n");
    printf("Enter the rows and columns of matrix A and B-");
    scanf("%d%d%d%d",&n,&m,&p,&q);
    if(m==p){
    int arr[n][m];
    int brr[m][q];
    int ans[n][q];
    printf("Enter the elements of matrix A-");
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            scanf("%d",&arr[i][j]);
     }
     printf("Enter the elements of matrix B-");
      for(int i=0;i<m;i++){
        for(int j=0;j<q;j++)
            scanf("%d",&brr[i][j]);
     }
     for(int i=0;i<n;i++){
        for(int j=0;j<q;j++)
            ans[i][j]=0;
     }

     for(int i=0;i<n;i++){
        for(int j=0;j<q;j++){
            for(int k=0;k<m;k++)
             ans[i][j]+=arr[i][k]*brr[k][j];
        }
    }
    printf("Multiplication of matrix A and B is-");
     for(int i=0;i<n;i++){
        for(int j=0;j<q;j++)
            printf("%d ",ans[i][j]);
           printf("\n");
     }
     }
    return 0 ;
}
 
