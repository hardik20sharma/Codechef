#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    short t;
    cin >> t;
    while(t--)
    {
        string j, s;
        cin >> j >> s;

        set<char> letters(j.begin(), j.end());
        short cnt = 0;

        for(char i : s)
            if(letters.find(i) != letters.end())
                cnt++;
        
        cout << cnt << "\n";
    }
}