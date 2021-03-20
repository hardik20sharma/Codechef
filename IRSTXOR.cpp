#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, c;   cin >> t;

    while(t--)
    {
        cin >> c;

        int d = (int) log2(c) + 1, floor_2_pow = pow(2, d-1), ceil_2_pow = pow(2, d);

        int min_limit = (floor_2_pow - 1), max_limit = (ceil_2_pow - 1);

        int diff = c - floor_2_pow;

        int ans1 = max_limit - diff, ans2 = min_limit;

        unsigned long long int ans = (ans1 * ans2);

        cout << ans << "\n";
    }
}