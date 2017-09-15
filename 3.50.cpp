 #include <iostream>
    using namespace std;
 
    int main() {
    	int n, a=1, k, m, l=0;
    	cout<<"Please enter the number to find its prime factors \n";
    	cin>>n;
    	cout<<"The prime factors are \n";
    	while(a<=n)
    	{
    	if(n%a==0)
    	  {for(m=1; m<=a; m++)
 
               {
               k=a%m;
               if(k==0)
               l++;
               }
            if (l==2)
    		cout<<a<<"\n";
    		a++;
    	  }
    	}
    	return 0;
    }
 