   #include <iostream>
    using namespace std;
 
    int main() {
    	int n, l, k, j=0, m, h;
    	cout<<"Please enter a number\n";
    	cin>>n;
    	for(h=1; h<=n; h++)
    	l=h;
    	{
    	 while(h>0)
    	  {
    		k=h/10;
    		m=h-k*10;
    		j=j+(m*m*m);
    		h=k;
    	  }
    	 if(j==l)
    	 cout<<j<<"\n";
    	}
    	return 0;
    }