#include <iostream>
using namespace std;
 
int main() {
	int n, k=1, a=1;
	cout<<"Please enter the number to find its factorial \n";
	cin>>n;
	while(k<=n)
	{
		a=a*k;
		k++;
	}
	cout<<"The factorial of "<<n<<" is "<<a;
	return 0;
}
