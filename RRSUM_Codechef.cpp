#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    long long n, m;
    cin >> n >> m;
    while(m--)
    {
        long long temp; cin >> temp;
        long long low_bound = max(temp - n, n + 1), up_bound = min(temp - 1, 2 * n);
        long long cnt = 0;

        (low_bound > up_bound) ? cnt = 0 : cnt = up_bound - low_bound + 1;
        cout << cnt << "\n";
    }
}
