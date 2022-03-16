#include <bits/stdc++.h>
using namespace std;

char getupper(string str, int i=0) {
	if(str[i] == '\0')
		return 0;
	if(isupper(str[i]))
		return str[i];
	return getupper(str,i+1);
}

int main() {
	string str;
	getline(cin,str);

	cout<<getupper(str);
	return 0;
}

/*
Problem Link:
https://www.geeksforgeeks.org/first-uppercase-letter-in-a-string-iterative-and-recursive/
*/