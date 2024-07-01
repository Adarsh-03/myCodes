#include <stdio.h>
#include <math.h>

int main()
{
    int m, n, o, p;
         printf("Enter the row and column of first matrix  : \n");

    scanf("%d %d", &m, &n);
    int a[m][n];
         printf("Enter elements of first matrix  : \n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Elements of first matrix : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }printf("\n");
    }
     printf("Enter the row and column of second matrix  : \n");
    scanf("%d %d", &o, &p);
    int b[o][p];
         printf("Enter elements of second matrix  : \n");

    for (int i = 0; i < o; i++)
    {
        for (int j = 0; j < p; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
     printf("Elements of second matrix : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");

    }

    if (n == o)
    {
        printf("Subtraction of matrix is : \n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d ", (a[i][j] - b[i][j]));
            }
            printf("\n");
        }
    }

    return 0;
}