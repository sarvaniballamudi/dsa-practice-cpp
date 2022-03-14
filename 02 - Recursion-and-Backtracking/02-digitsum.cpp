#include <bits/stdc++.h>
using namespace std;

int superDigit(string s, int k) {
	long sum=0, n=s.size();

	for(int i=0; i<n; i++) {
		sum+=(s[i]-'0');
	}
	int super = sum*k;
	if(super<10)
		return super;
	else
		return superDigit(to_string(super),1);

}

int main() {
	string s;
	int k;
	cin>>s>>k;

	cout<<superDigit(s,k);

	return 0;
}

/*
Problem Link:
https://www.hackerrank.com/challenges/recursive-digit-sum/problem?isFullScreen=true
*/