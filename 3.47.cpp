    #include <iostream>
    using namespace std;
 
    int main() {
    	int n, a, k, l=0;
    cout<<"Please enter the number you want to check if is a prime or not\n";
    cin>>n;
    for(a=1; a<=n; a++)
    {
    k=n%a;
    if(k==0)
    l++;
    }
    if (l==1)
    cout<<"It is neither prime nor composite";
    else if (l==2)
    cout<<"It is prime";
    else cout<<"It is composite";
 
 
    	return 0;
    }