#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
		int n, a=0, p, k, l, h, f;
cout<<"Please enter a number"<<"\n";
cin>>n;
k=n;
while(n>0)
{
n=n/10;
a++;
}
p=k/10;
l= k-p*10;
h=pow(10, a-1);
f=k/h;
cout<<"First digit is "<<f<<" and the last digit is "<<l;
 
	return 0;
}