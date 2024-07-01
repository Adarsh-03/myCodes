#include <stdio.h>
#include<math.h>

void rowmajor(int b, int s, int i, int j, int lbc, int ubr, int lbr)
{
    int a = 0;
    int N = ubr - lbr + 1;
    a = b + s * ((i - lbr) * N + (j - lbc));
    printf ("Address of element is %d",a);
}

void columnmajor(int b, int s, int i, int j, int lbc, int ubc, int lbr)
{
    int a = 0;
    int N = ubc - lbc + 1;
    a = b + s * ((j - lbc) * N + (i - lbr));
    printf( "Address of element is %d",a);
}

int main()
{
    int b, s, i, j, lbc, ubr, ubc, lbr;

    int n;
    printf( "Enter 1 for row major order or 2 column major order : ");
    scanf("%d",& n);
    printf ("Enter the base address ");
    scanf("%d",& b);
    printf ("Enter the size of element ");
    scanf("%d",& s);
    printf ("Enter the lower bound of row ");
    scanf("%d",& lbr);
    printf ("Enter the upper bound of row ");
    scanf("%d",& ubr);
    printf ("Enter the lower bound of column ");
    scanf("%d",& lbc);
    printf ("Enter the upper bound of column ");
    scanf("%d",& ubc);
    printf ("Enter the value of element in row ");
    scanf("%d",& i);
    printf ("Enter the value of element in column ");
    scanf("%d",& j);
    if (n == 1)
    {
        rowmajor(b, s, i, j, lbc, ubr, lbr);
    }
    else if (n == 2)
    {
        columnmajor(b, s, i, j, lbc, ubc, lbr);
    }

    return 0;
}
