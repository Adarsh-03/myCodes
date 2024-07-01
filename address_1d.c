#include <stdio.h>
#include<math.h>
int main()
{
    int b, s, i, lb;
    int a;
    printf("Enter the base address ");
    scanf("%d",&b);
    printf("Enter the size of element ");
    scanf("%d",&s);
    printf("Enter the lower bound ");
    scanf("%d",&lb);
    printf("Enter the value of element ");
    scanf("%d",&i);

    a = b + s * (i - lb);
    printf("Address of element is %d",a);
    return 0;
}

// Address of A[I] = B + W * (I – LB)