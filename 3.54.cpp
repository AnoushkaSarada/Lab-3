    #include <iostream>
        using namespace std;
 
        int main() {
        	int n, a=1, k=0, m=1;
        	cout<<"Please enter the number\n";
        	cin>>n;
        	for(m=1; m<=n; m++)
        	{
        	while(a<m)
        	{
        		if(m%a==0)
        		k=k+a;
        		a++;
        	}
        	if(k==m)
        	cout<<k<<"\n";
        	}
          	return 0;
        }
