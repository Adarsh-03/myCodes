#include <stdio.h>
#include <math.h>

int fibo(int n)
{

    if (n == 0 || n == 1)
    {
        return (n);
    }

    else
    {
        return (fibo(n - 1) + fibo(n - 2));
    }
}
int main()
{
    int n, i = 0;
    printf("Enter the number :");
    scanf("%d", &n);
    printf(" The Fibonacci series is : ");
    int s = 0;
    while (i < n)
    {
         s = fibo(i);
        i++;
    }

    printf("%d",s);
 
    return 0;
}