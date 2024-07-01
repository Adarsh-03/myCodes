#include <stdio.h>

int checkforsumofthree(int n)
{

    for (int i = 1; i < n; i++)
    {
        int sum = 0;
        sum = i + (i + 1) + (i + 2);
        if (n == sum)
        {
            return 1;
            break;
        }
    }
}

int main()
{

    int t;
    printf("This code is written by ADARSH CHAUDHARY //CS-A//2100320120007 \n");
    printf("Enter the number of output you want : ");
    scanf("%d", &t);
    while (t--)
    {

        int n, ans;
        printf("Enter the number : \n");
        scanf("%d", &n);

        ans = checkforsumofthree(n);

        if (ans == 1)
        {
            printf("True\n");
        }
        else
        {
            printf("False\n");
        }
    }

    return 0;
}