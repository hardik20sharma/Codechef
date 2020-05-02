#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, c, power_negative_side=0, power_positive_side=0, x, y, p;
    cin >> n >> m >> c;
    while(n--)
    {
        cin >> x >> y >> p;
        (y -m*x - c < 0) ? power_negative_side += p : power_positive_side += p;
    }
    cout << max(power_positive_side, power_negative_side) << "\n";
}