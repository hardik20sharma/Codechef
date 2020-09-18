#include<bits/stdc++.h>
using namespace std;

bool func(string s1, string s2)
{
    for(int i=0; i<s2.length(); i++)
        if(find(s1.begin(), s1.end(), s2[i]) != s1.end())
            return true;
    return false;
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
