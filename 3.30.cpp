#include <iostream>
using namespace std;
 
int main() {
	int n, i=1, k;
cout<<"Please enter a natural number"<<"\n";
cin>>n;
while ( i<=10)
{
k=n*i;
cout<<i<<" times "<<n<<"is "<<k<<"\n";
i++;
}
	return 0;
}