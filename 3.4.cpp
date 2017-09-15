#include <iostream>
using namespace std;
 
int main() {
	int num1, d;
	cout<<"Please enter a number";
	cin>>num1;
	d= num1%55;
	if(d=0)
	cout<<"The number is divisible by 5 and 11";
	else
	cout<<"The number is not divisible by either 5 or 11 or both";
	return 0;
}
