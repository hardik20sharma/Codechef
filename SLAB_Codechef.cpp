#include <iostream>
using namespace std;
#define k *1000
int main()
{
	long long int t, n, i, x;
	cin >> t;
	while(t--)
	{
	    cin >> n;
	    x = 0;
	    if(n >= 0 && n <= 250 k)
	    {
	        x=0;
	    }
	    else if(n > 250 k && n <= 500 k)
	    {
	        x = n - 250 k;
	        x *= 0.05; 
	    }
	    else if(n > 500 k && n <= 750 k)
	    {
	        x = n - 500 k;
	        x *= 0.1;
	        x += 12500;
	    }
	    else if(n > 750 k && n <= 1000 k)
	    {
	        x = n - 750000;
	        x *= 0.15;
	        x += 37500;
	    }
	    else if(n > 1000 k && n <= 1250 k)
	    {
	        x = n - 1000 k;
	        x *= 0.2;
	        x += 75 k;
	    }
	    else if(n > 1250 k && n <= 1500 k)
	    {
	        x = n - 1250 k;
	        x *= 0.25;
	        x += 125 k;
	    }
	    else if(n > 1500 k)
	    {
	        x = n - 1500 k;
	        x *= 0.3;
	        x += 187500;
	    }
	    cout << n-x << "\n";
	}
	return 0;
}