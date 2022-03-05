#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,res;
	cin>>a>>b;
	char op;
	cin>>op;

	switch(op) {
		case '+': res = a+b;
				  break;

		case '-': res = (a>b) ? a-b : b-a;
				  break;

		case '*': res = a*b;
				  break;

		case '/': res =(a>b) ? a/b : b/a;
				  break;

		default: cout<<"Invalid Choice"; 
	}
	cout<<res;
	return 0;
}