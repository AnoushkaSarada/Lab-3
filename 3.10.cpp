#include <iostream>
using namespace std;
 
int main() {
	char c;
	cout<<"Please enter an alphabet";
	cin>>c;
	if(c>='a' && c<='z')
	cout<<"Lower Case";
	else 
	cout<<"Upper case";
	return 0;
}