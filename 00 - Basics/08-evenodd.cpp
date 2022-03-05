#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n;
	cin>>t;

	while(t--) {
		cin>>n;

		// if(n%2 ==0)
		// 	cout<<"Even\n";
		// else
		// 	cout<<"Odd\n";

		(n%2 == 0)? cout<<"Even\n" : cout<<"Odd\n";
	}
	return 0;
}