#include <iostream>
using namespace std;
 
int main() {
	int num1, d, k, l;
	cout<<"Please enter a year";
	cin>>num1;
	d=num1%4;
	k=num1%100;
	l=num1%400;
	if(d!=0)
	cout<<"It is not a leap year";
	else if(d=0 && k!=0)
	cout<<"It is a leap year";
	else if(k=0 && l!=0)
	cout<<"It is not a leap year";
	else if(l=0)
	cout<<"It is a leap year";
	return 0;