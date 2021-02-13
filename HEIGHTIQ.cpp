#include<bits/stdc++.h>
using namespace std;

struct student { int height, iq; };

// int sol(vector<student> &stud, int n, int last_height, int last_iq)
// {
//     if(n == 1)
//         return  1;

//     if(stud[n-1].height < last_height && stud[n-1].iq > last_iq)
//         return max( 1 + sol(stud, n-1, stud[n-1].height, stud[n-1].iq),
//                     sol(stud, n-1, last_height, last_iq)
//                     );

//     return sol(stud, n-1, last_height, last_iq);
// }

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, n; cin >> t;
    while(t--)
    {
        cin >> n;

        vector<student> stud(n);
        for(int i=0; i<n; i++)
            cin >> stud[i].height;
        
        for(int i=0; i<n; i++)
            cin >> stud[i].iq;
        
        //cout << sol(stud, n, INT_MAX, INT_MIN) << "\n";

        vector<int> dp(n, 1);

        for (int i = 1; i < n; i++)
            for (int j = 0; j < i; j++)
                if ( stud[i].height > stud[j].height && stud[i].iq < stud[j].iq && dp[i] < dp[j] + 1)
                    dp[i] = dp[j] + 1;

        cout << *max_element(dp.begin(), dp.end()) << "\n";
    }
}