 #include <iostream>
    using namespace std;
 
    int main() {
    	int n, m, a, k,l, j=0;
    cout<<"Please enter the number\n";
    cin>>n;
    for(m=1; m<=n; m++)
    {
     l=0;
     for(a=1; a<=m; a++)
      {
        k=m%a;
        if(k==0)
        l++;
      }
     if (l==2)
     j=j+m;
    }
cout<<"The sum of prime numbers upto "<<n<<" is "<<j;
 
    	return 0;
    }
