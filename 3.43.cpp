#include <iostream>
using namespace std;
 
int main() {
	int n, a=1;
	cout<<"Please enter the number to find its factors \n";
	cin>>n;
	cout<<"The factors are \n";
	while(a<=n)
	{
		if(n%a==0)
		cout<<a<<"\n";
		a++;
	}
	return 0;
}