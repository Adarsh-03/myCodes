// // // C++ program to convert binary to decimal
// // // when input is represented as binary string.
// // #include <iostream>
// // #include <string>
// // using namespace std;

// // // Function to convert binary to decimal
// // int binaryToDecimal(string n)
// // {
// // 	string num = n;
// // 	int dec = 0;

// // 	// Initializing base value to 1, i.e 2^0
// // 	int base = 1;

// // 	int len = num.length();
// // 	for (int i = len - 1; i >= 0; i--) {
// // 		if (num[i] == '1')
// // 			dec += base;
// // 		base = base * 2;
// // 	}

// // 	return dec;
// // }

// // // Driver program to test above function
// // int main()
// // {
// // 	string num ;
// //     cin>>num;
// // 	cout << binaryToDecimal(num) << endl;
// // }

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int l, count = 0;
//         cin >> l;
//         char str[l];
//         cin >> str;
//         for (int i = 0; str[i] != '\0'; i++)
//         {
//             if (str[i] == '1')
//             {
//                 count++;
//             }
//             else
//             {
//                 break;
//             }
//             cout << count << endl;
//         }
//     }
//     return 0;
// }



// #include <stdio.h>
// int main(void)
// {
//     int t;
//     scanf("%d",&t);
//     while(t--)
//     {
//         int l, count = 0;
//         scanf("%d",&l);
//         char str[l];
//         scanf("%s",str);
//         for(int i = 0;str[i]!='\0';i++)
//         {
//             if(str[i]=='1')
//             {
//                 count++;
//             }
//             else{
                
//                 break;
//             }
//         }
//         printf("%d\n",count);
        
//     }
//     return 0;
// }

// #include <iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n;
// 	    cin>>n;
// 	    char s[n+1];
//         cin>>s;
//         int l = n/2;
//         int r = l + 1;


	    
// 	}
// 	return 0;
// }
