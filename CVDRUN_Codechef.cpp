#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, n, k, x, y; cin >> t;
    while(t--)
    {
        cin >> n >> k >> x >> y;

        if(x == y)
            { cout << "YES\n"; continue; }
        else if(k == 0)
            { cout << "NO\n"; continue; }

        vector<bool> city(n, false);
        bool infected = false;

        city[x] = true;
        while(1)
        {
            x = (x + k) % n;

            if(city[x])
                break;

            city[x] = true;

            if(city[y])
            {
                infected = true;
                break;
            }
        }

        (infected) ? cout << "YES\n" : cout << "NO\n";
    }
}