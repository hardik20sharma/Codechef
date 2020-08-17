#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    short t, n;
    cin >> t;
    while(t--)
    {
        string str1, str2;
        cin >> n >> str1 >> str2;        
        count(str1.begin(), str1.end(), '1') == count(str2.begin(), str2.end(), '1') ? cout << "YES\n" : cout << "NO\n";
    }
}