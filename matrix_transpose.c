#include <stdio.h>
#include <math.h>

int main()
{
    int n, m;
    printf("This code is written by ABHAY PANDEY //CS-A//2100320120004 \n");
     printf("Enter the row and column of matrix  : \n");
    scanf("%d %d", &m, &n);
    int a[n][m];
    int t[m][n];
    printf("Enter the elements of matrix  : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("The input matrix is  \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            t[i][j] = a[j][i];
        }
    }
    printf("Transpose of matrix is : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }
    return 0;
}