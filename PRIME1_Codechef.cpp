#include<bits/stdc++.h>
#define ull unsigned long long int
using namespace std;

bool isPrime(ull n)
{
    if(n <= 1)
        return false;

    if(n == 2 || n == 3)
        return true;
    
    if(n % 2 == 0 || n % 3 == 0)
        return false;
    
    for (ull i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
            return false;

    return true;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while(t--)
    {
        ull low_bound, up_bound;
        cin >> low_bound >> up_bound;

        for(ull i=low_bound; i<=up_bound; i++)
            if(isPrime(i))
                cout << i << "\n";
        cout << "\n";
    }
}