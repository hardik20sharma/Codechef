#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long int n, cnt=0, s=0, temp;
        cin >> n;
        while (n--)
        {
            cin >> temp;
            (temp % 2) ? s+=cnt : cnt++;
        }
        cout << s << "\n";
    }
}