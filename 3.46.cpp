#include <iostream>
using namespace std;
 
int main() {
	    int n1, n2,a,b,l=0;
 
    cout << "Please enter two numbers: ";
    cin >> n1 >> n2;
    a=n1;b=n2;
 
    while(n1 != n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    l=a*b/n1;
 
	return 0;
}