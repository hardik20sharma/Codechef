#include<bits/stdc++.h>
using namespace std;

short main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    short t, n, k;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;

        vector<short> vec(n);
        for (short i = 1; i <= n; i++)
            cin >> vec[i];

        //dp[i] will store minimum inefficiency for seating first i people
        vector<short> dp(n+1);

        dp[0] = 0;
        for (short i = 1; i <= n; i++)
        {
            dp[i] = dp[i - 1] + k;  //seperate table for ith person

            map <short, short> mp;
            short clash = 0;

            /* try out all possible options that include ith person as last person on the table */
            for (short j = i; j >= 1; j--)
            {
                mp[vec[j]]++;
                if (mp[vec[j]] == 2)
                    clash += 2;
                else if (mp[vec[j]] > 2)
                    clash += 1;

                //update dp[i] if you find a lower inefficiency value
                dp[i] = min( (int) dp[i], (int) dp[j - 1] + k + clash);
            }
        }
        cout << dp[n] << '\n';
    }
}