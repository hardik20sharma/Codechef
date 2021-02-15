#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, n; cin >> t;
    while(t--)
    {
        cin >> n;

        unordered_map<string, set<char>> a;
        for(int i=0; i<n; i++)
        {
            char c; string s;
            cin >> c >> s;
            a[s].insert(c);
        }

        int res = 0;
        for(auto i = a.begin(); i != a.end(); i++)
            for(auto j = i; j != a.end(); j++)
            {
                if(i->first == j->first)
                    continue;

                set<char> d1, d2;
                set_difference(i->second.begin(), i->second.end(), j->second.begin(), j->second.end(), inserter(d1, d1.begin()));
                set_difference(j->second.begin(), j->second.end(), i->second.begin(), i->second.end(), inserter(d2, d2.begin()));

                res += d1.size() * d2.size();
            }

        cout << res * 2 << "\n";
    }
}

/*
    1- a   b   c
    2- b   c   d

    1-2 = a
    2-1 = d

    cat bat
    cab dab

    at: {c, b}
    ab: {c, d}

    at: 
*/