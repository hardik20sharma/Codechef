#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, n; cin >> t;
    while(t--)
    {
        string s;
        cin >> n >> s;

        // last character of str
        char last_char = s[n-1];

        string::iterator it = s.end();
        it--;

        if( find(s.begin(), s.end(), last_char) == it )
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    // Checking if the last character is present before in the string or not
}