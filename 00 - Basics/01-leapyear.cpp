#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;

	if(((n%100 != 0) && (n%4 == 0)) || n%400 == 0)
		cout<<"Leap Year";
	else
		cout<<"Not a Leap Year";
	return 0;
}

/*
Leap year if divisible 4 and not by 100 
Leap year if divisible by 400 (for years ending with 00s like 2100,2000 etc.,)

Problem Link:
https://practice.geeksforgeeks.org/problems/leap-year0943/1
*/