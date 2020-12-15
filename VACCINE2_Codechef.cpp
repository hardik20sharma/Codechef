#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, n, d; cin >> t;
    while(t--)
    {
        cin >> n >> d;

        int risk = 0, no_risk = 0, temp;

        for(int i=0; i<n; i++)
        {
            cin >> temp;
            (temp <= 9 || 80 <= temp) ? risk++ : no_risk++;
        }

        cout << ceil( (double) risk / (double) d ) + ceil( (double) no_risk / (double) d ) << "\n";
    }
}