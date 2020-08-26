#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        int a[n];
        vector<int> store;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            if(a[i] == 1)
                store.push_back(i);
        }

        bool ans = true;
        for(int i=1; i<store.size(); i++)
            if(store[i] - store[i-1] < 6)
                ans = false;

        ans ? cout << "YES\n" : cout << "NO\n";
    }
}
