#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, p, h;

    cin >> t;
    while(t--)
    {
        cin >> h >> p;
        
        bool dead = false;
        while(p && h)
        {
            h -= p;
            if(h <= 0)
                dead = true;
            p /= 2;
        }
        dead ? cout << "1\n" : cout << "0\n";
    }
}