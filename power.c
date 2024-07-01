#include <stdio.h>
#include <math.h>

int power(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    else
    {
        return a * power(a, b - 1);
    }
}
int main()
{
    int a, b;
printf("This code is written by ABHAY PANDEY //CS-A//2100320120004 \n");    printf("Enter the numbers  : \n");
    scanf("%d %d", &a, &b);

    printf("Power of the number is : ");
    printf("%d", power(a, b));
    return 0;
}