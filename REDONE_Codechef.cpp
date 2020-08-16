#include<bits/stdc++.h>
#define ull unsigned long long 
#define m 1000000007
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, i;
    cin >> t;
    
    ull a[1000001];
    a[1]=1;

    for(i=2; i<1000001; i++)
        a[i] = (a[i-1] + i + (i * a[i-1] ) % m) % m;
    
    while(t--)
    {
        ull n;
        cin >> n;
        cout << a[n] << "\n";
    }
    return 0;
}