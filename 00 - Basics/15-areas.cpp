#include <iostream>
#include <cctype>
using namespace std;

int main() {
	string shape;
	getline(cin,shape);
	float area;

	if(shape == "circle"){
		int r;
		cin>>r;
		area = 3.14*r*r;
	}

	else if(shape == "triangle") {
		int b,h;
			cin>>b>>h;
			area = 0.5*b*h;
	}

	else if(shape == "rectangle") {
		int l,b;
			cin>>l>>b;
			area = l*b;
	}

	else if(shape == "parallelogram") {
					int b,h;
			cin>>b>>h;
			area = 0.5*b*h;
	}
	else if(shape == "rhombus") {
					int d1,d2;
			cin>>d1>>d2;
			area = 0.5*d1*d2;

	}
	else if(shape == "equilateral triangle") {
		int side;
			cin>>side;
			area = 0.433*side*side;
	}
	else {
		cout<<"\n Please choose from Circle, Triangle, Parallelogram, Rhombus and Equilateral Triangle";
	}

	cout<<"Area of "<<shape<<" is:"<<area;
	return 0;
}