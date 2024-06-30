// C++ Program to Convert Decimal to Binary Using Functions
#include <iostream>
using namespace std;
int binary_num(int num)
{
    int i = 1, rem, binary = 0;

    while (num != 0)
    {
        rem = num % 2;
        num = num / 2;
        binary = binary + (rem * i);
        i = i * 10;
    }
    return binary;
}
int main()
{
    int n, bin;

    // Asking for input
    cout << "Please enter a decimal number: ";
    cin >> n;

    // Displaying result
    cout << "Equivalent binary number is: " << binary_num(n) << endl;

    return 0;
} 
