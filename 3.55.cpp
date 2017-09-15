#include <iostream>
using namespace std;
 
int main() {
int x,y,z,i;
cout<<"enter x and y";
cin>>x>>y;
z=1;
for(i=1;i<=y;i++)
z=z*x;
cout<<z;
 
	return 0;
}