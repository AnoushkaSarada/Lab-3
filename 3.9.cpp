#include <iostream>
using namespace std;
 
int main() {
	char c;
	cout<<"Please enter a character";
	cin>>c;
	if ((c>='a' && c<='z') || (c>='A' && c<='Z'))
	cout<<"The character is an alphabet";
	else if(c>=0 && c<=9)
	cout<<"The character is a number";
	else 
	cout<<"The character is a special character";
	return 0;
}