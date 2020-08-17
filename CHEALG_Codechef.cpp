#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string str, final_str = "";
        cin >> str;

        for(int i=0; i<str.length(); i++)
        {
            char c = str[i];
            int cnt = 1;
            while(c == str[i+1])
            {
                cnt++;
                i++;
            }
            final_str += (c + to_string(cnt));
        }
        (final_str.length() < str.length()) ? cout << "YES\n" : cout << "NO\n";
    }
}
