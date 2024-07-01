#include <stdio.h>
#include <math.h>

void rowmajor(int b, int s, int i, int j, int lbc, int ubc, int ubr, int lbr, int k, int lbk, int ubk)
{
    int a = 0;
    int M = ubc - lbc + 1;
    int N = ubk - lbk + 1;
    a = b + s * ((i - lbr) * M * N + (j - lbc) * N + (k - lbk));
    printf("Address of element is %d", a);
}

void columnmajor(int b, int s, int i, int j, int lbc, int ubc, int lbr, int ubr, int k, int lbk, int ubk)
{
    int a = 0;
    int M = ubr - lbr + 1;
    int N = ubc - lbc + 1;
    a = b + s * ((k - lbk) * M * N + (j - lbc) * M + (i - lbr));
    printf("Address of element is %d", a);
}

int main()
{
    int b, s, i, j, lbc, ubr, ubc, lbr, k, lbk, ubk;

    int n;
    printf("Enter 1 for row major order or 2 column major order : ");
    scanf("%d", &n);
    printf("Enter the base address ");
    scanf("%d", &b);
    printf("Enter the size of element ");
    scanf("%d", &s);
    printf("Enter the lower bound of row ");
    scanf("%d", &lbr) ;
    printf("Enter the upper bound of row ");
    scanf("%d", &ubr) ;
    printf("Enter the lower bound of column ");
    scanf("%d", &lbc) ;
    printf("Enter the upper bound of column ");
    scanf("%d", &ubc) ;
    printf("Enter the lower bound of block");
    scanf("%d", &lbk) ;
    printf("Enter the upper bound of block");
    scanf("%d", &ubk) ;
    printf("Enter the value of element in row ");
    scanf("%d", &i);
    printf("Enter the value of element in column ");
    scanf("%d", &j);
    printf("Enter the value of block ");
    scanf("%d", &k);
    if (n == 1)
    {
        rowmajor(b, s, i, j, lbc, ubc, ubr, lbr, k, lbk, ubk);
    }
    else if (n == 2)
    {
        columnmajor(b, s, i, j, lbc, ubc, lbr, ubr, k, lbk, ubk);
    }

    return 0;
}