#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n, k, temp, min_steps = INT_MAX;

        cin >> n >> k;
        while(n--)
        {
            cin >> temp;
            if(k % temp == 0)
                min_steps = min (min_steps, k / temp);
        }

        (min_steps == INT_MAX) ? min_steps = -1 : min_steps = k/min_steps;
        cout << min_steps << "\n";
    }
}