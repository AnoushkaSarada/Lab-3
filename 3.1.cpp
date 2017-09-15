	9 days ago 
#include <iostream>
using namespace std;
 
int main() {
	int num1, num2;
cout<<"Please enter two numbers";
cin>>num1>>num2;
if(num1>num2)
             cout<<"The greater number is" << num1<<endl;
else if (num2>num1)
cout<<"The greater number is" << num2<<endl;
else 
cout<<"Both are equal";
 
	return 0;
}