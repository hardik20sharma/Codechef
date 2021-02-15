#include<bits/stdc++.h>
using namespace std;

// int brute_force_sol(vector<int> a)
// {
//     int res = -1;

//     for(int i=0; i<a.size(); i++)
//         for(int j=0; j<a.size(); j++)
//             for(int k=0; k<a.size(); k++)
//                 if(i != j && j != k && i != k)
//                     res = max(res, abs(a[i] - a[j]) + abs(a[j] - a[k]) + abs(a[k] - a[i]) );
//     return res;
// }

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, n; cin >> t;
    while(t--)
    {
        cin >> n;
        vector<int> a(n);

        int min_ele = INT_MAX, max_ele = INT_MIN;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            if(min_ele > a[i])
                min_ele = a[i];

            if(max_ele < a[i])
                max_ele = a[i];
        }
        
        long long int x = min_ele, z = max_ele, res = -1;
        for(int i=0; i<n; i++)
            res = max(res, abs(x - a[i]) + abs(a[i] - z) + abs(z - x));
        
        cout << res << "\n";
    }
}

/*
    |Ax−Ay| + |Ay−Az| + |Az−Ax|

    1 2 3 4
    Ax = 1, Ay = 3, Az = 4      2 + 1 + 3 = 6
    Ax = 1, Ay = 2, Az = 4      1 + 2 + 3 = 6

    1 2 3 5
    Ax = 1, Ay = 3, Az = 5      2 + 2 + 4 = 8
    Ax = 1, Ay = 2, Az = 5      1 + 3 + 4 = 8
    
    7 1 -6 5 2
*/