#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, n, k; cin >> t;
    while(t--)
    {
        cin >> n >> k;

        vector<int> a(n);
        for(int i=0; i<n; i++)
            cin >> a[i];

        if(k == 1) { cout << "0\n"; continue; }

        sort(a.begin(), a.end());

        int res = INT_MAX;
        for (int i = 0; i <= n - k; i++)
            res = min(res, a[i+k-1] - a[i]);

        cout << res << "\n";

        // int min_store = INT_MAX, max_store = INT_MIN;

        // deque<int> q;
        // for(int i=0; i<k; i++)
        // {
        //     q.push_back(a[i]);
        //     if(a[i] < min_store)
        //         min_store = a[i];
            
        //     if(max_store < a[i])
        //         max_store = a[i];
        // }

        // int res = max_store - min_store;

        // for(int i=k; i<n; i++)
        // {
        //     q.push_back(a[i]);
            
        //     if(q.front() == min_store)
        //     {
        //         q.pop_front();
        //         min_store = *min_element(q.begin(), q.end());
        //     }
        //     else if(q.front() == max_store)
        //     {
        //         q.pop_front();
        //         max_store = *max_element(q.begin(), q.end());
        //     }
        //     else
        //         q.pop_front();

        //     if(res < (max_store - min_store) )
        //         res = max_store - min_store;
        // }

        // cout << res << "\n";
    }
}