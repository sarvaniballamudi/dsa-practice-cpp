#include <bits/stdc++.h>
using namespace std;

void revchararr(char str[],int len) {
	if(*str =='\0')
		return;
	else {
		revchararr(str+1, len-1);
		cout<<*str;
	}
}

int main() {
	int n;
	cin>>n;

	char str[n];
	for(int i=0; i<n;i++)
		cin>>str[i];

	revchararr(str,n);
	return 0;
}
/*
Problem Link:
https://leetcode.com/problems/reverse-string/
*/