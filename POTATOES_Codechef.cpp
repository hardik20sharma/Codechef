#include<bits/stdc++.h>
using namespace std;

bool prime_check(int n)
{
    for(int i=2; i<=sqrt(n); i++)
        if(n % i==0)
            return false;
        
    return true;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x, y, sum;
        cin >> x >> y;
        sum = x + y;
        
        if(prime_check(sum))
            sum++;
        while(!prime_check(sum))
            sum++;
        
        cout << sum-x-y << "\n";
    }
}