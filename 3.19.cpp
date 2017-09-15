#include <iostream>
using namespace std;
 
int main() {
	long m1, m2, m3, m4, m5, t;
	cout<<"Enter the marks in Physics, Cehmistry, Biology, Mathematics and Computer";
	cin>>m1>>m2>>m3>>m4>>m5;
	t=(m1+m2+m3+m4+m5)/5;
	if (t>=90)
	cout<<"Grade A";
	else if(t>=80 && t<90)
	cout<<"Grade B";
	else if(t>=70 && t<80)
	cout<<"Grade C";
	else if(t>=60 && t<70)
	cout<<"Grade D";
	else if(t>=40 && t<60)
	cout<<"Grade E";
	else
	cout<<"Grade F";
	return 0;
}