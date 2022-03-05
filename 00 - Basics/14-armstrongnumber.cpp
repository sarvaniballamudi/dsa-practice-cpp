#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;

	int sum=0,num=n;
	while(num>0) {
		int ld = num%10;
		sum+=round(pow(ld,3));
		num/=10;
	}

	if(n == sum)
		cout<<"Armstrong.";
	else
		cout<<"Not Armstrong.";
	return 0;
}

//Not Complete Solution.
//To be implemented from GFG