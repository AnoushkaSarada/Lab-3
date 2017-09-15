#include <iostream>
using namespace std;
 
int main() {
	long cp, sp, p;
	cout<<"Please enter the cost price";
	cin>>cp;
	cout<<"Please enter the selling price";
	cin>>sp;
	p= sp - cp;
	if (p>0)
	cout<<"The profit is"<<p;
	else if (p<0)
	cout<<"The loss is"<<p;
	return 0;
}