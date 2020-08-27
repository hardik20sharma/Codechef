#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<int> a(n);
        unsigned long long int sum = 0;

        for(int i=0; i<n; i++)
            cin >> a[i];

        sort(a, a+n);

        for(int i=0; i<n; i++)
        {
            if(a[n-i-1] - i < 0)
                continue;
            sum += a[n-i-1] - i;
        }

        cout << sum % 1000000007 << "\n";
    }
}
