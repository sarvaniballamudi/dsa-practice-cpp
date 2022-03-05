#include <bits/stdc++.h>
using namespace std;

int main() {
	int low,high;
	cin>>low>>high;

	for(int i=low; i <= high; i++) {
		int count = 0;
		//finding divisor till sqrt(n) loop
		for(int j=2; j*j <= i; j++) {
			if(i%j == 0)
				count++;
		}
		if(count == 0)
			cout<<i<<" ";
	}
	return 0;
}