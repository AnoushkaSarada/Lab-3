#include <iostream>
    #include <cmath>
    using namespace std;
 
    int main() {
    		int n, a=0, p, k, l, h, f, s, g, i, j, e;
    cout<<"Please enter a number"<<"\n";
    cin>>n;
    k=n;
    while(n>0)
    {
    n=n/10;
    a++;
    }
    p=k/10;
    l= k-p*10;
    h=pow(10, a-1);
    f=k/h;
    s=f+l;
    cout<<"First digit is "<<f<<" and the last digit is "<<l<<"\n";
    g=k-f*h;
    i=g+l*h;
    j=i/10;
    e=i-j*10 + f;
cout<<"If we swap them, we get "<<e;
    	return 0;
    }