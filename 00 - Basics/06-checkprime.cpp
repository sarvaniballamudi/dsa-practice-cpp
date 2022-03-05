#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;

	while(t--) {
		int n,c=0;
		cin>>n;

		for(int i=2;i*i<n;i++) {
			if(n%i == 0) {
				c++;
				break;
			}
		}

		if(c>0){
			cout<<"Not Prime\n";
		} else
		cout<<"Prime\n";		
		}
	
	return 0;
}

/*
Problem Link:
https://www.youtube.com/watch?v=3bCf5xSVkbo&list=PL-Jc9J83PIiFj7YSPl2ulcpwy-mwj1SSk&index=11
*/