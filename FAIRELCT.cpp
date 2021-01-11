#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, n, m; cin >> t;
    while(t--)
    {
        cin >> n >> m;

        vector<int> a(n), b(m);
        
        int sum_a = 0, sum_b = 0;

        for(int i=0; i<n; sum_a += a[i], i++)
            cin >> a[i];

        for(int i=0; i<m; sum_b += b[i], i++)
            cin >> b[i];

        if(sum_a > sum_b)
            { cout << "0\n"; continue; }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<int>());

        int cnt = 0;

        for(int i=0, j=0; sum_b >= sum_a && i < n && j < m; i++, j++)
        {
            sum_b -= b[j];
            sum_b += a[i];

            sum_a -= a[i];
            sum_a += b[j];
            
            cnt++;
        }

        (sum_a > sum_b) ? cout << cnt << "\n" : cout << "-1\n";
    }
}