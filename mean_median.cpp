#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int mean(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    return (sum / n);
}

int median(int a[],int n){
    sort(a,a+n);
    int b = a[n/2];
    return b;
}
int main()
{
    int a[5];
    cout<<"Enter the numbers : "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    cout << "Mean of numbers is " << mean(a, 5) << endl;
    cout << "Median of numbers is " << median(a, 5) << endl;
    return 0;
}