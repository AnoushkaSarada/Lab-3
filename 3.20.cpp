#include <iostream>
using namespace std;
 
int main() {
	long amt, h, d, t;
	cout<<"Please enter the basic salary";
	cin>>amt;
	if(amt<=10000)
	{
              	h=0.2*amt;
            	d=0.8*amt;
            	t=h+d+amt;
	}
	else if(amt<=20000 && amt>10000)
	{
		h=0.25*amt;
	            d=0.9*amt;
	            t=amt+h+d;
 
	}
	else
	{
		h=0.3*amt;
	d=0.95*amt;
	t=amt+h+d;
	}
	cout<<"The gross salary is"<<t;
	return 0;
}