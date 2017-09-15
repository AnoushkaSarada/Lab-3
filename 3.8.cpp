#include <iostream>
using namespace std;
 
int main() {
	char c;
	cout<<"Please enter an alphabet";
	cin>>c;
	if((c='a') || (c='e') || (c='i') || (c='o') || (c='u'))
	cout<<"It is a vowel";
	else if((c='A') || (c='E') || (c='I') || (c='O') || (c='U'))
	cout<<"It is a vowel";
	else cout<<"It is a consonent";
	return 0;
}