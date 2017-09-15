#include <iostream>
using namespace std;
 
int main() {
	int n, a=0;
cout<<"Please enter a number"<<"\n";
cin>>n;
while(n>0)
{
n=n/10;
a++;
}
cout<<"The number has "<<a<<" digits";
	return 0;
}