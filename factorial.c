
// Source Code :  // This program is for factorial

#include <stdio.h>
#include<math.h>


int fact(int n){
    if (n==0)
    {
        return 1;
    }
    else
    {
        return n * fact(n-1);
    }
    
    
}
int main(){
   printf("This code is written by ABHAY PANDEY //CS-A//2100320120004 \n");
    int n;
    printf("Enter the number  : \n");
    scanf("%d",&n);

    printf("Factorial of the number is : ");
    printf("%d",fact(n));
    return 0;
}
