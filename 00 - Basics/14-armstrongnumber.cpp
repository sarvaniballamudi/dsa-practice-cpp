#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;

	int sum=0,num=n,order=0;
	//Finding order of number
	while(num>0) {
		order++;
		num/=10;
	}
	num=n;
	while(num>0) {
		int ld = num%10;
		sum+=round(pow(ld,order));
		num/=10;
	}

	if(n == sum)
		cout<<"Armstrong."<<endl;
	else
		cout<<"Not Armstrong."<<endl;
	return 0;
}