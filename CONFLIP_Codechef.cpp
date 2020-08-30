#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int t;
    cin >> t;
    while(t--)
    {
        int g;
        cin >> g;
        while(g--)
        {
            int n, i, q;
            cin >> i >> n >> q;

            if(n%2 == 0)
                cout << n/2 << "\n";
            else
                if(i == q)
                    cout << n/2 << "\n";
                else
                    cout << n/2 + 1 << "\n";
        }
    }
}
