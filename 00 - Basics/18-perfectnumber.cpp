#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,sum=1;
	cin>>n;

	for(int i=2;i*i<=n;i++) {
		if(n%i==0) {
			if(i*i!=n)
				sum+=i+(n/i);
			else
				sum+=i;
		}
	}

	if(sum==n && n!=1)
		cout<<"Perfect Number.";
	else
		cout<<"Not a perfect number.";
	return 0;
}