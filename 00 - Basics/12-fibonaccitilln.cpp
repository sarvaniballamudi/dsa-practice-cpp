#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a=0,b=1;
	for(int i=2;i<n;i++) {
		cout<<a<<" ";
		int next = a+b;
		a = b;
		b = next;
	}
	return 0;
}