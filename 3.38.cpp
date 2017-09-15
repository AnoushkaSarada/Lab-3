 #include <iostream>
    using namespace std;
 
    int main() {
    	int n, l, r, k;
    	cout<<"Please enter a number \n";
    	cin>>n;
    	k=n;
    	while(n>0)
         {
           l=n%10;
           r=r*10 + l;
           n=n/10;
         }
         if(r==k)
         cout<<"Yes, it is a pallindrome";
         else 
         cout<<"No, it is not  pallindrome";
         return 0;
    }