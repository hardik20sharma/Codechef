#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, n, temp; cin >> t;
    while(t--)
    {
        cin >> n;
        if(n == 1)
        {
            int a; cin >> a;
            (0 <= a) ? cout << "YES\n" : cout << "NO\n";
        }
        else
        {
            int a, sum = 0; cin >> a; n--;
            while(n--)
            {
                int temp; cin >> temp;
                sum += temp;
            }

            (a < -sum) ? cout << "NO\n" : cout << "YES\n";
        }
    }
}