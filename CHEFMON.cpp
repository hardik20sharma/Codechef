#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, n, budget; cin >> t;
    while(t--)
    {
        cin >> n >> budget;

        int cost[n];
        for(int i=0; i<n; i++)
            cin >> cost[i];

        int res = 0, dq_sum = 0;

        deque<int> dq;
        for(int i=0; i<n; i++)
        {
            dq.push_back(cost[i]);
            dq_sum += cost[i];

            while(budget < dq_sum)
            {
                dq_sum -= dq.front();
                dq.pop_front();
            }

            if(res < dq_sum)
                res = dq_sum;
        }

        cout << res << "\n";
        
//  100 - budget    20  30  40  30

//      dq - 

        // == Approach 1 - 20 marks ==
        // for(int i=0; i<n; i++)
        // {
        //     int sum = cost[i];
        //     for(int j=i+1; j<n; j++)
        //     {
        //         sum += cost[j];
        //         if(budget < sum)
        //             continue;
        //         max = sum;
        //     }

        //     if(max_spent < max)
        //         max_spent = max;
        // }

        // cout << max_spent << "\n";


        // --- Approach 2 ---
        // for(int i=0; i<n; i++)
        // {
        //     max += cost[i];
        //     if(max_spent < max && max <= budget)
        //         max_spent = max;

        //     if(budget < max)
        //         max = 0;
        // }

        // cout << max_spent << "\n";
    }
}