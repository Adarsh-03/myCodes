// FIBONACCI SERIES

// #include<iostream>
// using namespace std;
// int fibo(int n){
//     if (n==0)
//     {
//         return 0;
//     }
//     if (n==1)
//     {
//         return 1;
//     }

//     int ans = fibo(n-1) + fibo(n-2)  ;
//     return ans;

// }
// int main(){
//     int n;
//     cin>>n;

//     for (int i = 0; i < n; i++)
//     {
//         cout<<fibo(i)<<" ";
//     }

//     return 0;
// }

// CLIMB STAIRS

// #include<iostream>
// using namespace std;
// int stairs(int n){
//     if (n<0)
//     {
//         return 0;
//     }
//     if (n==0)
//     {
//         return 1;
//     }

//     int ans = stairs(n-1) + stairs(n-2)  ;
//     return ans;

// }
// int main(){
//     int n;
//     cin>>n;

//     cout<<stairs(n);

//     return 0;
// }



// SAY DIGITS

// #include <iostream>
// using namespace std;
// void saydigits(string a[], int n)
// {
//     if (n == 0)
//     {
//         return;
//     }

//     int digit = n % 10;
//     n = n / 10;

//     saydigits(a, n);
//     cout << a[digit] << " ";
// }
// int main()
// {
//     int n;
//     cin >> n;
//     string a[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
//     cout << endl;
//     saydigits(a, n);
//     cout << endl;
//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin>>t;
    while(t--){
        int x,y,q,r;
        cin>>x>>y;
        
        q = x/y;
        r = x%y;
        
        if(r<y){
            {
                cout<<(q+r)<<endl;
            }
        else{
            cout<<q<<endl;}
        }
    }
    
	return 0;
}
