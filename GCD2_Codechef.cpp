#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if(b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while(t--)
    {
        int a; string b;
        cin >> a >> b;

        if(a == 0)
            { cout << b << "\n"; continue; }

        int b_num = 0;
        for(int i=0; i<b.size(); i++)
            b_num = ( (b_num * 10) % a + (b[i] - '0') ) % a;

        cout << gcd(a, b_num) << "\n";
    }
}