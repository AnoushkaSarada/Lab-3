#include <iostream>
using namespace std;
 
int main() {
    int n, k, t, s, g;
cout<<"Please enter a natural number"<<"\n";
cin>>n;
k= n/2;
t= k*(k+1);
g= n*(n+1)/2;
s= g-t;
cout<<s<<"\n";
 
	return 0;
}