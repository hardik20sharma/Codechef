#include<bits/stdc++.h>
using namespace std;

int gcd(int x, int y)
{
    if (y == 0)
        return x;
    return gcd(y, x % y);     
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, x, y;
    cin >> t;
    while(t--)
    {
        cin >> x >> y;
        cout << 2 * gcd(x, y) << "\n";
    }
}