#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++)
            cin >> a[i];
        cin >> k;
        k=a[k-1];
        sort(a.begin(), a.end());
        cout << find(a.begin(), a.end(), k) - a.begin() + 1 << "\n";
    }
}