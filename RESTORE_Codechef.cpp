#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, n; cin >> t;
    while(t--)
    {
        cin >> n;

        vector<int> b(n+1);
        for(int i=1; i<=n; i++)
            cin >> b[i];
        
        vector<int> a(n+1);

        int cnt = 1;
        a[n] = cnt++;

        for(int i=n-1; i>=1; i--)
            if(b[i] == i)
                a[i] = (cnt++);
            else
                a[i] = a[b[i]];

        for(int i=1; i<=n; i++)
            cout << a[i] << " ";
        cout << "\n";
    }
}

/*
1 2 3 4 5 -- Index

2 6 5 3 4
5 2 3 4 5

5 2 3 4 5
1 4 3 2 1
*/