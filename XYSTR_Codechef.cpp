#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned short t, cnt;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        cnt = 0;
 
        for(int i=0; i<s.length()-1; i++)
            if( (s[i]=='x' && s[i+1]=='y') || (s[i]=='y' && s[i+1]=='x') )
            {
                i++;
                cnt++;
            }
        cout << cnt << "\n";
    }
}
