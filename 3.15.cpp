#include <iostream>
using namespace std;
 
int main() {
	int a, b, c, d, e, f;
	cout<<"Enter the sides of the triangle";
	cin>>a>>b>>c;
	d=a+b;
	e=b+c;
	f=a+c;
	if (d>c && e>a && f>b)
	cout<<"The triangle is valid";
	else cout<<"The triangle is invalid";
	return 0;
}
