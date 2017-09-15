#include <iostream>
using namespace std;
 
int main() {
	int b, p, k=1, a;
	cout<<"Please enter the base \n";
	cin>>b;
	cout<<"Please enter the power \n";
	cin>>p;
	for(a=1; a<=p; a++)
	{
		k=k*b;
	}
	cout<<k;
	return 0;
}