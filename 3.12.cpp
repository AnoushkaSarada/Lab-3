include <iostream>
using namespace std;
 
int main() {
	int num1;
	cout<<"Please enter the month number";
	cin>>num1;
	if ((num1=1) || (num1=3) || (num1=5) || (num1=7) || (num1=8) || (num1=10) || (num1=12))
	cout<<"31";
	else if(num1=2)
	cout<<"28 or 29";
	else
	cout<<"30";
	return 0;
}