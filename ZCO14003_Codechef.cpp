#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll n; cin >> n;

    ll a[n];
    for(ll i=0; i<n; i++)
        cin >> a[i];

    sort(a, a+n);

    ll prev = 0, next = 0;
    for(ll i=n-1; i>=0; i--)
    {
        next = a[i] * (n-i);
        if(prev < next)
            prev = next;
    }

    cout << prev << "\n";
}
