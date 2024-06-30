#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    boost::multiprecision::cpp_int a;
	    cin>>a;
	    
	    cout<<(a%20)<<endl;
	}
	return 0;
}
