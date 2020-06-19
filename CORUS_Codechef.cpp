#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, q, c;
    cin >> t;
    while(t--)
    {
        vector<int> disease(26);
        string s;

        cin >> n >> q >> s;
        for(int i=0; i<s.length(); i++)
            disease[s[i]-'a']++;

        while(q--)
        {
            int cnt = 0;
            cin >> c;
            for(int i=0; i<26; i++)
                if(disease[i] > c)
                    cnt += disease[i]-c;

            cout << cnt << "\n";
        }
    }
}