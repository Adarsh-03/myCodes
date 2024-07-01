#include <stdio.h>
#include <math.h>

int ifexists(int z[], int u, int v)
{
    int i;
    if (u == 0)
        return 0;
    for (i = 0; i <= u; i++)
        if (z[i] == v)
            return (1);
    return (0);
}

void differencearr1(int a[], int n, int b[], int m)
{
    int i = 0, j = 0;
    int k = 0;
    int c[100];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i] == b[j])
            {
                break;
            }
        }
        if (j == n)
        {
            if (!ifexists(c, k, a[i]))
            {
                c[k] = a[i];
                k++;
            }
        }
    }

        printf("Elements of difference set : \n");
    for (int u = 0; u < k; u++)
    {
        printf("%d ", c[u]);
    }
}

// void differencearr2(int a[], int n, int b[], int m)
// {
// }
int main()
{
    int n, m, p;
    printf(" Enter the size of 1st and 2nd array : \n");
    scanf("%d %d", &n, &m);

    int a[n], b[m];

    printf(" Enter elements of 1st array : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf(" Enter elements of 2nd array : \n");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }

    differencearr1(a, n, b, m);
    return 0;
}