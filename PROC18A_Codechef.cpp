#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, k, n, temp;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        int a[n], maximum = -1;
        
        cin >> a[0];
        for(int i=1; i<n; i++)
        {
            cin >> a[i];
            a[i] += a[i-1];
        }

        for(int i=k; i<n; i++)
            maximum = max(maximum, a[i] - a[i-k]);
        
        cout << maximum << "\n";
    }
}