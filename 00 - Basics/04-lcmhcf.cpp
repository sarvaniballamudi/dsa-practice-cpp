#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b;
	cin>>a>>b;

	int n1,n2,rem;
	n1 = a;
	n2 = b;

	while((n1 % n2 ) != 0) {
		rem = n1%n2;
		n1 = n2;
		n2 = rem;
	}
	int gcd = n2;
	cout<<"HCF is "<<gcd<<"\n";
	int lcm = (a*b)/gcd;
	cout<<"LCM is "<<lcm<<"\n";
	return 0;
}