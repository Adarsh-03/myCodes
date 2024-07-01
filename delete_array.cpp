#include <stdio.h>
#include<math.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, key, d;
    cin >> n;
    int a[n];
    cout << "Enter the elements of array are : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Elements of array are : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Enter the element of array you want to delete : " << endl;
    cin >> key;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
                count++;
            // d = i;
            for (int j = i; j < n; j++)
            {
                a[j] = a[j + 1];
            }
        }
    }
    cout << count << endl;

    cout << "Elements of array are : " << endl;
    for (int i = 0; i < n - count; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}