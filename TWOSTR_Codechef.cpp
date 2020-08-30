#include<bits/stdc++.h>
using namespace std;

bool func(string s1, string s2)
{
    for(int i=0; i<s1.length(); i++)
            if(s1[i]!='?' && s2[i]!='?')
                if(s1[i]!=s2[i])
                    return false;
    return true;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        func(s1, s2) ? cout << "Yes\n" : cout << "No\n";
    }
}
