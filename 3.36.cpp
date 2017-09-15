#include <iostream>
    using namespace std;
 
    int main() {
    	int n, i, j, l=1;
    	cout<<"Please enter a number \n";
    	cin>>n;
    	while(n>0)
    	{
    		i=n/10;
    		j=n-(10*i);
    		n=i;
    		l=l*j;
    	}
    	cout<<"The sum of the digits is "<<l;
    	return 0;
    }