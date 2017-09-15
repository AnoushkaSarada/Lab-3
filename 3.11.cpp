include <iostream>
using namespace std;
 
int main() {
	int num1;
	cout<<"Please enter a week day number";
	cin>>num1;
	if(num1=1)
	cout<<"Monday";
	else if (num1=2)
	cout<<"Tuesday";
	else if (num1=3)
	cout<<"Wednesday";
	else if(num1=4)
	cout<<"Thursday";
	else if (num1=5)
	cout<<"Friday";
	else if(num1=6)
	cout<<"Saturday";
	else if(num1=7)
	cout<<"Sunday";
	else
	cout<<"No such day exists";
	return 0;
}