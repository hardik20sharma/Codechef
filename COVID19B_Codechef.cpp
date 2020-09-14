#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    short t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<short> v(n);

        for(short i=0; i<n; i++)
            cin >> v[i];

        short min_cnt = 1, max_cnt = 1;
        for(short i=0; i<n-1; i++)
            if(v[i] > v[i+1])
                max_cnt++;

        for(short i=0; i<n-1; i++)
            if(v[i] < v[i+1])
                min_cnt++;

        cout << min_cnt << " " << max_cnt << "\n";
    }
}