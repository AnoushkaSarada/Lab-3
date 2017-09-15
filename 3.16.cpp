#include <iostream>
using namespace std;
 
int main() {
	int a, b, c;
	cout<<"Please enter the sides of the triangle";
	cin>>a>>b>>c;
	if(a==b && b==c)
	cout<<"Equilateral";
	else if ((a==b && b!=c) || (b==c && c!=a) || (a==c && a!=b))
	cout<<"Isocleles";
	else cout<<"Scalen";
	return 0;
}