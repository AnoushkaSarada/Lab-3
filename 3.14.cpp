#include <iostream>
using namespace std;
 
int main() {
	int a, b, c, d;
	cout<<"Please enter the three angles of the triangle";
	cin>>a>>b>>c;
	d=a+b+c;
	if (d==180)
	cout<<"The triangle is valid";
	else
	cout<<"The triangle is invalid";
	return 0;
}