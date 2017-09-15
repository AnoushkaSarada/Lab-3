#include <iostream>
using namespace std;
 
int main() {
	int n, l, r;
	cout<<"Please enter a number \n";
	cin>>n;
	while(n>0)
     {
       l=n%10;
       r=r*10 + l;
       n=n/10;
     }
     cout<<"The reverse number is "<<r;
     return 0;
}