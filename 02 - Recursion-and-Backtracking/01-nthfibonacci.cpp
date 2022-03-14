#include <bits/stdc++.h>
using namespace std;

long long int fib(long long int n) {
	if(n==0)
		return 0;
	if(n==1)
		return 1;

	return (fib(n-1)+ fib(n-2))%1000000007;		
}

int main() {
	long long int n;
	cin>>n;
	cout<<fib(n);
	return 0;
}

/*
Problem Link:
https://practice.geeksforgeeks.org/problems/nth-fibonacci-number1335
*/