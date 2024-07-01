#include <stdio.h>
#include<math.h>
void unionset(int a[], int n, int b[], int m)
{
    int k = 0;
    int c[100];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        c[k++] = a[n];
    }

    for (int i = 0; i < m; i++)
    {
        c[k++] = b[i];
    }

    sort(c, c + n + m);
    for (int i = n; i <k ; i++)
    {
        if (c[i] == b[i])
        {
            count++;

            for (int j = i; j < n; j++)
            {
                a[j] = a[j + 1];
            }
        }
    }

    cout << "Elements of array are : " << endl;
    for (int i = 0; i < n - count; i++)
    {
        cout << c[i] << " ";
    }
}
int main()
{
    int n, m;
    cout << " Enter the size of 1st and 2nd array : " << endl;
    cin >> n >> m;
    int a[n], b[m];
    cout << " Enter elements of 1st array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << " Enter elements of 2nd array : " << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    unionset(a, n, b, m);

    return 0;
}