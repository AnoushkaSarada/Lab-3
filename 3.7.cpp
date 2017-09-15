#include <iostream>
using namespace std;
 
int main() {
	char c;
	cout<<"Please enter a character";
	cin>>c;
	if((c>='a' && c<='z') || (c>='A' && c<='Z'))
	cout<<"It is an alphabet";
	else cout<<"It is not an alphabet";
	return 0;
}