#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, min = 1000000000;
        cin >> n;

        vector<int> a(n);
        for(int i=0; i<n; i++)
            cin >> a[i];
        
        sort(a.begin(), a.end());
        for(int i=0; i<n-1; i++)
            if(abs(a[i+1]-a[i]) < min)
                min = abs(a[i+1]-a[i]);
        cout << min << "\n";
    }
}