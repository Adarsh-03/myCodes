#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int d = sqrt((b * b) - (4 * a * c));
    cout << "First Root is : "<<(-b+d)/(2*a)<<endl;
    cout << "Second Root is : "<<(-b-d)/(2*a);
    return 0;
}