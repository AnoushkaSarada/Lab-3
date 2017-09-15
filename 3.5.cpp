#include <iostream>
using namespace std;
 
int main() {
    int num1, d;
    cout<<"Please enter a number";
    cin>>num1;
    d= num1%2;
    if (d==1)
    cout<<"The number is odd";
    else
    cout<<"The number is even";
	return 0;
}