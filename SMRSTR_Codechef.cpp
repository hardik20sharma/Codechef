#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, q;
        cin >> n >> q;
        long long int k, x=1, m;
        for(long long int i=0; i<n; i++)
        {
            cin >> k;
            x*=k;
        }

        while(q--)
        {
            cin >> m;
            cout << m/x << " ";
        }
        cout << endl;
    }
}