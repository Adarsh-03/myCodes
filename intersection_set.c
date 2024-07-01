#include <stdio.h>
#include<math.h>
using namespace std;
void intersectionarr(int a[], int n, int b[], int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i] == b[j])
            {
                cout << a[i] << " ";
            }
        }
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
    intersectionarr(a, n, b, m);

    return 0;
}