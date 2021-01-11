#include<bits/stdc++.h>
using namespace std;

char c (string s)
{
    int code = (8 * (s[0] - '0') ) + (4 * (s[1] - '0') ) + (2 * (s[2] - '0') ) + (1 * (s[3] - '0') );
    return (char) 'a' + code;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, n; cin >> t;
    while(t--)
    {
        string s; cin >> n >> s;
        for(int i=0; i<s.length(); i+=4)
            cout << c(s.substr(i, 4));
        cout << "\n";
    }
}