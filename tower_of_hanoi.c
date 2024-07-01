#include <stdio.h>
#include<math.h>


void tower_of_hanoi(int n,int s,int m,int d){

    if (n>0)
    {
        tower_of_hanoi(n-1,s,d,m);
        printf("Disc from %d -> %d \n",s,d);
        tower_of_hanoi(n-1,m,s,d);
    }
    
}
int main(){
    int n;
     printf("This code is written by ABHAY PANDEY //CS-A//2100320120004 \n");
    printf("Enter the number of discs  : ");
    scanf("%d",&n);

    printf("Process to transfer discs are :");
    tower_of_hanoi(n,1,2,3);

    return 0;
}