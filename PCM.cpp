#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while(t--)
    {
        set<char> s;
        for(int i=0; i<3; i++)
        {
            char c; cin >> c; s.insert(c);
        }
        (s.size() == 3) ? cout << "YES\n" : cout << "NO\n";
    }
}