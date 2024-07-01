#include <stdio.h>
#include <math.h>

int reverse(int n, int temp, int sum)
{
    if (n > 0)
    {
        temp = n % 10;
        sum = sum + temp;
        reverse(n / 10, temp, sum);
    }
    else
    {
        return sum;
    }
}
int main()
{
    int n;
    int temp = 0, sum = 0;
    
        printf("Name - Adarsh Chaudhary  //CS-A//2100320120007 \n");

    printf("Enter the number  : \n");
    scanf("%d", &n);

    printf("Sum of the number is : ");
    printf("%d", reverse(n, temp, sum));
    return 0;
}