#include <bits/stdc++.h>
using namespace std;

void sumtriangle(int a[], int n) {

	if(n < 1)
		return;

	int temp[n-1];

	for(int i=0; i<n-1; i++) {
		int ele = a[i] + a[i+1];
		temp[i] = ele;
	}

	sumtriangle(temp,n-1);

	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
	cout<<"\n";
}

int main() {
	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	sumtriangle(arr,n);
	return 0;
}

/*
Problem Link:
https://www.geeksforgeeks.org/sum-triangle-from-array/
*/