#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, n, k, d; cin >> t;
    while(t--)
    {
        cin >> n >> k >> d;
        
        int sum = 0, temp;

        for(int i=0; i<n; sum += temp, i++)
            cin >> temp;

        if(d < sum / k)
            cout << d << "\n";
        else
            cout << sum / k << "\n";
    }
}