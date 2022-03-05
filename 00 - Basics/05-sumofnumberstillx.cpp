#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,sum = 0,count = 0;

	while(count >= 0) {
		cin>>n;
		if(n == 0)
			break;
		count++;
		sum+=n;
	}

	cout<<"Sum: "<<sum;
	return 0;
}