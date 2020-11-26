#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--)
    {
        int m, n, k;
        cin >> n >> m >> k;
        (max(n,m) - min(n, m) > k) ? (cout << max(n, m) - min(n,m) - k << "\n") : (cout << "0\n");
    }
}
