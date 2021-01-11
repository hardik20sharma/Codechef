#include<bits/stdc++.h>
using namespace std;

int dp[5001][5001];

int func(vector<int> &heights, int &k, int t1, int t2, int n, int cnt)    // Recursive function
{
    if(t1 < k && t2 < k)
        if(dp[t1][t2] != -1)        // If already in dp, return directly
            return dp[t1][t2];

    if(t1 > k)
        t1 = k;
    
    if(t2 > k)
        t2 = k;

    if(t1 == k && t2 == k)      // Return the number of blocks when found
        return dp[t1][t2] = cnt;
        
    if(n <= 0)                          // When not possible
        return dp[t1][t2] = INT_MAX;

    int adding_to_t1 = INT_MAX, adding_to_t2 = INT_MAX;

    if(t1 < k)
        adding_to_t1 = func(heights, k, t1 + heights[n-1], t2, n-1, cnt + 1);

    if(t2 < k)
        adding_to_t2 = func(heights, k, t1, t2 + heights[n-1], n-1, cnt + 1);

    return dp[t1][t2] = min(adding_to_t1, adding_to_t2);
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, n, k; cin >> t;
    while(t--)
    {
        cin >> n >> k;
     
        vector<int> heights(n);
        int sum = 0;

        for(int i=0; i<n; sum += heights[i], i++)
            cin >> heights[i];

        if(n == 1 || sum < 2 * k)
            { cout << "-1\n"; continue; }
        
        memset(dp, -1, sizeof(dp));
        sort(heights.begin(), heights.end());

        int res = func(heights, k, 0, 0, n, 0);

        if(res == INT_MAX)
            { cout << "-1\n"; continue; }
        else
            cout << res << "\n";
    }
}