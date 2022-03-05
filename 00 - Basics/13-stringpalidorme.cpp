#include <bits/stdc++.h>
using namespace std;

int main() {
	string str;
	int c=0;
	getline(cin,str);
	int n = str.size();

	for(int i=0; i<n/2; i++) {
		if(str.at(i) == str.at(n-i-1))
			c++;
	}

	if(c>0)
		cout<<"Palindrome.";
	else
		cout<<"Not Palindrome.";
	return 0;
}