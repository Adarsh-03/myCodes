#include <stdio.h>
#include<math.h>


int reverse(int n,int temp,int sum)
{
    if (n > 0)
    {
        temp = n % 10;
        sum = sum * 10 + temp;
        reverse(n / 10 , temp,sum);
    }
    else
    {
        return sum;
    }
}
int main()
{
    int n;
    int temp = 0, sum = 0;printf("This code is written by ABHAY PANDEY //CS-A//2100320120004 \n");
    printf("Enter the number  : ");
    scanf("%d",&n);
    printf("Reverse of the number is : ");
    printf("%d", reverse(n,temp,sum));
    return 0;
}