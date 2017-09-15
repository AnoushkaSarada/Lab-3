  #include <iostream>
    using namespace std;
 
    int main() {
    	int n, a=1, k=0;
    	cout<<"Please enter the number\n";
    	cin>>n;
    	while(a<n)
    	{
    		if(n%a==0)
    		k=k+a;
    		a++;
    	}
    	if(k==n)
    	cout<<"It is a perfect number";
    	else
    	cout<<"It is not a perfect number";
    	return 0;
    }
