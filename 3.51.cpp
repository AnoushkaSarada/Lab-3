#include <iostream>
using namespace std;
 
int main() {
	int n, l, k, j=0, m;
	cout<<"Please enter a number\n";
	cin>>n;
	l=n;
	while(n>0)
	{
		k=n/10;
		m=n-k*10;
		j=j+(m*m*m);
		n=k;
	}
	if(j==l)
	cout<<"It is an armstrong number";
	else
	cout<<"It is not an armstrong number";
	return 0;
}
