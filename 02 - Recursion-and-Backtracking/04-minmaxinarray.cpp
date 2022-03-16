#include <bits/stdc++.h>
using namespace std;

int minarray(int a[], int n) {
	if(n == 1)
		return a[0];

	return min(a[n-1], minarray(a, n-1));
}

int  maxarray(int a[], int n) {
	if(n == 1)
		return a[0];

	return max(a[n-1], maxarray(a, n-1));
}

int main() {
	int n;
	cin>>n;

	int arr[n];
	for(int i=0; i<n; i++) 
		cin>>arr[i];

	cout<<"Min: "<<minarray(arr, n)<<endl;
	cout<<"Max: "<<maxarray(arr,n);
	return 0;
}

/*
Problem Link:
https://www.geeksforgeeks.org/recursive-programs-to-find-minimum-and-maximum-elements-of-array/
*/