#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        ll a = log2((long double)n);
        
        if(a == 0)
            cout << "0\n";
        else if(a == 1)
            cout << "1\n";
        else
        {
            int temp = a % 4;
            if(temp == 0)      cout << "0\n";
            else if(temp == 1) cout << "9\n";
            else if(temp == 2) cout << "2\n";
            else            cout << "3\n";
        }
        
    }
}