#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--)
    {
        int n, max = -1;
        cin >> n;

        double cnt = 0, total_possibilities = (n * (n-1)) / 2;

        vector<int> a(n);
        for(int i=0; i<n; i++)
            cin >> a[i];

        for(int i=0; i<n; i++)
            for(int j=i+1; j<n; j++)
                if(a[i] + a[j] > max)
                {
                    max = a[i] + a[j];
                    cnt = 1;
                }
                else if(a[i] + a[j] == max)
                    cnt++;

        cout << setprecision(8) << cnt/total_possibilities << "\n";
    }
}
