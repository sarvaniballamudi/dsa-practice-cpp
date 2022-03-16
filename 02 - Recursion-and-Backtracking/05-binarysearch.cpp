#include <bits/stdc++.h>
using namespace std;

int binarysearch(int arr[], int ele) {
	int n = *(&arr + 1) - arr;
	int low = 0, high = n-1;

	while(low <= high) {
		int  mid = ((low+high)/2);

		if (ele == arr[mid])
			return mid;
		else if (ele > arr[mid]) {
			low = mid+1;
			return binarysearch(arr, ele);
		}
		else if(ele < arr[mid]) {
			high = mid-1;
			return binarysearch(arr, ele);
		}
		else
			return -1;
	}
}

int main() {
	int n, target;
	int nums[10000];
	for(int i=0; i<n; i++) {
		cin>>nums[i];
	}
	cin>>target;
	cout<<binarysearch(nums, target);
	return 0;
}

/*
Problem Link:
https://leetcode.com/problems/binary-search/
*/