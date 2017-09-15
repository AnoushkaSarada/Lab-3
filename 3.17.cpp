#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
	long a, b, c, d, g, r1, r2;
	cout<<"Please enter the co efficients of x^2, x and constant in respective order";
	cin>>a>>b>>c;
	d= b*b + 4*a*c;
	g= pow(d, 0.5);
	r1= (-b + g)/2*a;
	r2= (-b - g)/2*a;
	if (d>=0)
	cout<<"The roots are"<< r1 <<"and" <<r2;
	else cout<<"The roots are imaginary";
	return 0;
}